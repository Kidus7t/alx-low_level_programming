#include "main.h"

/**
 * _strncat- concatenating 2 strings
 * @dest: parameter
 * @src: prm
 * @n: prm
 * Return: a pointer
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, d = 0;
while (dest[i++])
	d++;
for (i = 0; src[i] && i < n; i++)
	dest[d++] = src[i];
return (dest);

}
