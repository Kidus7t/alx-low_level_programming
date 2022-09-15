#include "main.h"

/**
 * more_numbers- printing 0-14
 * Return: nothing
 */

void more_numbers(void)
{
char n;
int c;

for (n = 48; n <= 57; n++)
{
for (c = 0; c <= 14; c++)
{
_putchar(c);
}
_putchar('\n');
}
_putchar('\n');
}
