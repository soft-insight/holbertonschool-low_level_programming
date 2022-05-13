#include "lists.h"

/**
 * sum_dlistint - sum the elements of a dll
 * @head: pointer to head
 *
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int i = 0, sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
		i++;
	}
	return (sum);
}
