#include "hash_tables.h"

/**
 * key_index - function that calculates the index of an element of a hash table
 *
 * @key: pointer to key
 * @size: size of the hash table
 *
 * Return: the index of the list
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
