#include "lists.h"

/**
 * get_dnodeint_at_index - obtain the node of a dll at a index
 * @head: pointer to head
 * @index: the index
 *
 * Return: the node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (i == index)
		{
			head = head->next;
			return (head);
		}
		i++;
	}
	return (head);
}
