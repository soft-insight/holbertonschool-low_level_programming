#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - print the length of a linked list
 * @h: the head of the list
 *
 * Return: the number of element, the lenght
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
