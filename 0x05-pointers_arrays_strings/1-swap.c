#include <stdio.h>
#include "main.h"

/**
 * swap_int- length of string
 * @a: parameter
 * @b: parameter
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int tmp = *a;

*a = *b;
*b = tmp;
}
