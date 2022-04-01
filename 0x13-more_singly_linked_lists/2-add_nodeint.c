#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a node at the beginning
 * @head: pointer to pointer of head
 * @n: the new int node
 *
 * Return: the address to head that is the newNode
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
