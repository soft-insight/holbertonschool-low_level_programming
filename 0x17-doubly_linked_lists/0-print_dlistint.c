#include "lists.h"

/**
 * print_dlistint - print double linked lists elements
 * @dlistint_t: the structure
 *
 * Return - the number of items
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
