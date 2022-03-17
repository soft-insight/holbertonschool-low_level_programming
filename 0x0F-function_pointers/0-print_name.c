#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - passes the char name to the pointer to function f
 * @name: tha char to pass
 * @f: the function that receives char
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	int i, k;

	i = 0;
	while (name[i])
		i++;

	for (k = 0; k < i; k++)
		putchar(name[i]);
	f(name);
}

