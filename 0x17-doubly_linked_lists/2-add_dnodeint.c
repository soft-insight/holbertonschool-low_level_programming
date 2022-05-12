#include "lists.h"

/**
 * add_dnodeint - add node at beggining
 * @head: pointer to the struct
 * @n: the value of the node
 *
 * Return: the nodes added
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
