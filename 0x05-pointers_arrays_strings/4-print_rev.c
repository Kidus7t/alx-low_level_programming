#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev- printing a reverse of a string
 * @s: parameter
 * Return: nothing
 */

void print_rev(char *s)
{

int i = strlen(s) - 1;
for (; i >= 0 ; i--)
{
putchar(*(s + i));
}
putchar(10);
}
