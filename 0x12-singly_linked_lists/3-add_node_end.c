#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * @head: pointer to head
 * @str: string
 *
 * Return: addres of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (last->next != 0)
			last = last->next;
		last->next = new_node;
	}
	new_node->str = strdup(str);

	while (str[i] != '\0')
		i++;

	new_node->len = i;

	return (new_node);
}
