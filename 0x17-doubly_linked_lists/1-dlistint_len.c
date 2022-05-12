#include "lists.h"

/**
 * dlistint_len - a func that returns the len of a double linked list
 * @h: the head of the list
 *
 * Return: the len
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
