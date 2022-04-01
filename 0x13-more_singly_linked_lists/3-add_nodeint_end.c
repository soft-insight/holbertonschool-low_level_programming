#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add node int to the end
 * @head: the pointer to pointer to head
 * @n: the new int
 *
 * Return: the newNode
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *lastNode;

	newNode = malloc(sizeof(listint_t));
	lastNode = *head;

	if (newNode == NULL)
		return (NULL);


	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		while (lastNode->next != NULL)
			lastNode = lastNode->next;
	lastNode->next = newNode;
	}
	return (newNode);
}
