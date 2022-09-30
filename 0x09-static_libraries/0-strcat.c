#include "main.h"

/**
 * _strcat- concatenating a string
 * @dest: parameter
 * @src: parameter
 * Return: a pointer
 */

char *_strcat(char *dest, char *src)
{
int i = 0, d = 0;
while (dest[i++])
{
d++;
}
for (i = 0; src[i]; i++)
{
dest[d++] = src[i];
}
return (dest);
}
