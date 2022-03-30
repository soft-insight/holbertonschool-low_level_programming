#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - given a linked list returns the num of elements
 * @h: the head
 *
 * Return: the length
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
