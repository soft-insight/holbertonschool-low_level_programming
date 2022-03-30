#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print elements of a linked list of str and len
 * @h: the head
 *
 * Return: the number of elements
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
