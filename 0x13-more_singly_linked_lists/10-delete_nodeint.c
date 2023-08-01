#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node at a specified position in a linked list.
 * @head: Pointer to the pointer of the first node in the list.
 * @index: Position of the node to delete (starting from 0).
 * Return: If deletion is successful (1), otherwise (-1).
 *
 * Description:
 * This function deletes the node at the specified position 'index' in the linked list.
 * If the position is out of range or the list is empty, it returns -1. If the deletion
 * is successful, it returns 1.
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
        listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
