#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print the values of a linked list
 * @h: the head of the list
 *
 * Return: the number of elements
 */

size_t print_listint(const listint_t *h)
{
	int i;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
