#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert node
 * @head: pointer to head
 * @idx: index
 * @n: new node
 *
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp = NULL;
	unsigned int i = 0;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	temp = *head;
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		while (i < (idx - 1))
		{
			temp = temp->next;
			i++;
			if (temp == NULL)
			{
				free(newNode);
				return (NULL);
			}
		}
		newNode->next = temp->next;
		temp->next = newNode;
	}
	return (newNode);
}
