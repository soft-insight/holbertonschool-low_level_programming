#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node.
 * @head: pointer to head
 * @index: the index of the node
 *
 * Return: 1 if succeeded, -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *new = *head;
	unsigned int i = 0;

	if (new == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		return (1);
	}
	while (i < (index - 1))
	{
		if (new->next == NULL)
			return (-1);
		new = new->next;
		i++;
	}
	temp = new->next;
	new->next = temp->next;
	free(temp);
	return (1);
}
