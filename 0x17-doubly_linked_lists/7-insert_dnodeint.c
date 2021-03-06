#include "lists.h"
#include <stddef.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @n: data inside the new node
 * @idx: index of the list where the new node should be added
 * Return: the address of the new element at idx, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_mem, *temp = *h;
	/* unsigned int counter = 0 */

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new_mem = malloc(sizeof(dlistint_t));

	if (new_mem == NULL)
		return (NULL);

	new_mem->n = n;
	new_mem->next = temp->next;
	new_mem->prev = temp;
	temp->next->prev = new_mem;
	temp->next = new_mem;

	return (new_mem);
}
