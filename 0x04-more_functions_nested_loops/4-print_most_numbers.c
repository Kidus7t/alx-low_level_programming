#include "main.h"

/**
 * print_most_numbers- printing 0-9 except 2 & 4
 * Return: nothing
 */

void print_most_numbers(void)
{
char n;

for (n = 48; n <= 57; n++)
{
if (n == 50 || n == 52)
continue;
_putchar(n);
}
_putchar('\n');
}
