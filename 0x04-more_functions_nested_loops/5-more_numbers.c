#include <stdio.h>
#include "main.h"

/**
 * more_numbers- printing 0-14
 * Return: nothing
 */

void more_numbers(void)
{
int s;
int c;

for (s = 0; s <= 9; s++)
{
for (c = 0; c < 15; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
