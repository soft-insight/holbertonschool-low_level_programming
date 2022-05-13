#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete node at nth
 * @head: Pointer to direction of the head
 * @index: The position to del
 *
 * Return: 1 if it succeeded or -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p1, *temp = *head;
	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (temp->next == NULL)
			return (-1);
		temp->next->prev = NULL;
		free(temp);
		return (1);
	}

	while (counter < index)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
		counter++;
	}
	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	if (temp->next == NULL)
	{
		p1 = temp->prev;
		p1->next = NULL;
		free(temp);
		return (1);
	}
	free(temp);
	return (1);
}
