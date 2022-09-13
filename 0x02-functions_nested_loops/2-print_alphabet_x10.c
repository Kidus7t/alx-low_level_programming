#include "main.h"
/**
 * print_alphabet_x10-print 10 times the alphabet
 * Return: 0
 */
void print_alphabet(void)
{       char c;
	char num;
for (num = 0 ; num <= 9 ; num++)
{
for (c = 'a' ; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
