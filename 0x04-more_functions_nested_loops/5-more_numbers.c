#include <stdio.h>
#include "main.h"

/**
 * more_numbers- printing 0-14
 * Return: nothing
 */

void more_numbers(void)
{
char s;
int c;

for (s = 48; s <= 57; s++)
{
for (c = 0; c <= 14; c++)
{
_putchar(c);
}
_putchar('\n');
}
_putchar('\n');
}
