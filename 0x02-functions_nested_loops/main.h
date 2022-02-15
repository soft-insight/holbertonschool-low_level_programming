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
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);


#endif
