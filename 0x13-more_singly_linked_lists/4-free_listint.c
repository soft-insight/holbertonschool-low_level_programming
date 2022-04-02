#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a list
 * @head: pointer to head - input head
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
