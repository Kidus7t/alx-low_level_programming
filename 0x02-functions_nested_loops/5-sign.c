#include "main.h"
/**
 * print_sign - printing sign of a number
 * @n: int that will be used
 * Return: 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
_putchar(',');
return (1);
}
else if (n == 0)
{
_putchar('0');
_putchar(',');
return (0);
}
else
{
_putchar('-');
_putchar(',');
return (-1);
}
}
