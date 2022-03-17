#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - passes the char name to the pointer to function f
 * @name: tha char to pass
 * @f: the function that receives char
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}

