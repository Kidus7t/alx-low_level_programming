#include <stdio.h>
#include "main.h"

/**
 * print_triangle- printing triangle
 * @size: size of parameter
 * Return: 0
 */

void print_triangle(int size)
{
int i1, i2, i3;
if (size > 0)
{
for (i1 = 0; i1 <= (size - 1); i1++)
{
for (i2 = 0; i2 < (size - 1) - i1; i2++)
{
putchar(' ');
}
for (i3 = 0; i3 <= i1; i3++)
{
putchar('#');
}
putchar('\n');
}
}
else
putchar('\n');
}

