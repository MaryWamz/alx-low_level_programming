#include "lists.h"

/**
 * reverse_listint - Reverse a linked list.
 * @head: Pointer to the pointer of the first node in the list.
 * Return: Pointer to the first node in the new reversed list.
 *
 * Description:
 * This function reverses the given linked list. It takes the pointer to the
 * first node 'head', and iteratively reverses the next pointers to achieve
 * the reversal. The new head of the reversed list is returned.
 **/
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL;
    listint_t *next = NULL;

    while (*head)
    {
        next = (*head)->next;
        (*head)->next = prev;
        prev = *head;
        *head = next;
    }

    *head = prev;

    return (*head);
}
