#ifndef MAIN_H
#define MAIN_H

/*
 * If a header file happens to be included twice,
 * the compiler will process its contents twice and it
 * will result in an error. The standard way to prevent
 * this is to enclose the entire real contents of
 * the file in a conditional, like this −
 */

/*
 * The functions included must prototype for this exercise
 */


int _putchar(char);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);

#endif
