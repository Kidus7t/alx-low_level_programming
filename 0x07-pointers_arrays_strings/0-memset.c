#include "main.h"

/**
 * _memset- filling memory
 * @s: pm
 * @b: pm
 * @n: pm
 * Return: sth
 */

char *_memset(char *s, char b, unsigned int n)
{
while (n)
{
s[n - 1] = b;
n--;
}
return (s);
}
