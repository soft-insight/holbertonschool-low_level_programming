#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Create a hash table
 *
 * @size: the size of the hash table
 * Return: a pointer to the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hstable;

	hstable = malloc(sizeof(hash_table_t));
	if (hstable == NULL)
		return (NULL);

	hstable->size = size;
	hstable->array = calloc(sizeof(hash_table_t *), size);
	if (hstable == NULL)
		return (NULL);

	return (hstable);
}
