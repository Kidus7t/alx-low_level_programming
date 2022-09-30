#include <stdio.h>
#include "main.h"

/**
 * _isupper- uppercase letter
 * @c: tested character
 * Return: 1 for uppercase or 0
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
