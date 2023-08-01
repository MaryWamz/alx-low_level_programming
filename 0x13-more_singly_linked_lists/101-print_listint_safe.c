#include "lists.h"

/**
 * print_listint_safe - Prints a linked list safely to avoid loops.
 * @head: Pointer to the first node of the list.
 *
 * Return: Number of nodes in the list.
 *
 * Description:
 * This function prints the elements of a singly linked list of type listint_t
 * safely to avoid infinite loops in case of a looped list. It uses the
 * difference in memory addresses between the current node and its next node
 * to detect and handle loops. The number of nodes in the list is returned.
 **/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_n = NULL;
	const listint_t *l_n = NULL;
	size_t counter = 0;
	size_t new_n;

	tmp_n = head;
	while (tmp_n)
	{
		printf("[%p] %d\n", (void *)tmp_n, tmp_n->n);
		counter++;
		tmp_n = tmp_n->next;
		l_n = head;
		new_n = 0;
		while (new_n < counter)
		{
			if (tmp_n == l_n)
			{
				printf("-> [%p] %d\n", (void *)tmp_n, tmp_n->n);
				return (counter);
			}
			l_n = l_n->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
