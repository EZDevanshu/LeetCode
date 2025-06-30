#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int data;
    struct ListNode *next;
};

struct ListNode *mergeTwoLists(struct ListNode *head1, struct ListNode *head2)
{
    if (head1 == NULL || head2 == NULL)
    {
        return head1 == NULL ? head2 : head1;
    }

    if (head1->data <= head2->data)
    {
        head1->next = mergeTwoLists(head1->next, head2);
        return head1;
    }
    else
    {
        head2->next = mergeTwoLists(head1, head2->next);
        return head2;
    }
}