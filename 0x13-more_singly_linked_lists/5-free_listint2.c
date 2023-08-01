#include "lists.h"

/**
 * free_listint2 - Frees a linked list.
 * @head: Double pointer to the first node of the list to be freed.
 *
 * Description:
 * This function frees all the nodes of the linked list starting from the head.
 * It traverses the list, frees each node, and updates the head to the next node.
 * Finally, it sets the head to NULL to indicate an empty list.
 **/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
