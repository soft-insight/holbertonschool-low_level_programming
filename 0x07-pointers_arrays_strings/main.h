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
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);


#endif
