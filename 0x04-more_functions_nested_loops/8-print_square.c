#include "main.h"

/**
 * print_square- square printing
 * @size: tested character
 * Return: nothing
 */

void print_square(int size)
{
int square;

while (size-- > 0)
{
for (square = size; square > 0; square--)
{
_putchar('#');
}
_putchar('\n')
}
}
