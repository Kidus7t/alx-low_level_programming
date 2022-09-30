#include "main.h"

/**
 * _strchr- locating a char
 * @s: pm
 * @c: pm
 * Return: 0
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; *(s + i); i++)
{
if (*(s + i) == c)
	return (s + i);
}
if (*(s + i) == c)
	return (s + i);
return (0);
}
