#include "lists.h"

/**
 * print_dlistint - print double linked lists elements
 * @h: the head
 *
 * Return: the number of items
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
