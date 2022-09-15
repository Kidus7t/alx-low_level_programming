#include <stdio.h>
#include "main.h"

/**
 * print_square- square printing
 * @size: tested character
 * Return: nothing
 */

void print_square(int size)
{
int square;
int c;
if (size > 0)
{
for (square = 0; square < size; square++)
{
for (c = 0; c < (size - 1);c++)
{
putchar('#');
}
putchar('#');
putchar('\n');
}
}
else
{
putchar('\n');
}
}
