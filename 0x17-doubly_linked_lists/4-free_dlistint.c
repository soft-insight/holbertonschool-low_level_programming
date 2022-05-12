#include "lists.h"
/**
 * free_dlistint - Free the memory
 * @head: Pointer to head
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	if (head)
		while (head->next != NULL)
		{
			head = head->next;
			free(head->prev);
		}
	free(head);
}

