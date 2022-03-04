#include <stdio.h>

/**
 * main - print argc
 * @argc: number of args
 * @argv: the names of the args
 * Return: 0
 */

int main(int argc,  __attribute__((__unused__)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
