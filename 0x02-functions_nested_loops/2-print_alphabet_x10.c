#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet
 * Return: 0
 */
void print_alphabet(void)
{       char c , i;
for (i = 0 ; i <= 9 ; i++)
{
for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
