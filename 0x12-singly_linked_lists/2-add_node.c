#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beggining of list_t
 * @head: pointer to list of the head
 * @str: the string
 *
 * Return: pointer to char to the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	while (str[i] != '\0')
		i++;

	new_node->len = i;

	new_node->next = *head;
	*head = new_node;

	return (*head);
}
