#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Insert a new node at a specified position in a linked list.
 * @head: Pointer to the pointer of the first node in the list.
 * @idx: Position at which the new node should be inserted (starting from 0).
 * @n: Data to be stored in the new node.
 * Return: Address of the new node, or NULL if insertion failed.
 *
 * Description:
 * This function inserts a new node with the given data 'n' at the specified position
 * 'idx' in the linked list. If the position is out of range, or if memory allocation
 * fails, it returns NULL. If the insertion is successful, it returns the address of
 * the new node in the list.
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
