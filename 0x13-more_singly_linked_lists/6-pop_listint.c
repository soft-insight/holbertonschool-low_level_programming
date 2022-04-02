#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - pop the first element
 * @head: pointer to head
 *
 * Return: the element poped up
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}



