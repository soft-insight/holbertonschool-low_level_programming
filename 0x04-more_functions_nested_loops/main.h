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
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);

#endif
