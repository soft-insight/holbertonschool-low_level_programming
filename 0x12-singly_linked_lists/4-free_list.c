#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - check the code for Holberton School students.
 * @head: Is the pointer to the list
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}

