#include "main.h"

/**
 * _memcpy- copying a memory area
 * @dest: pm
 * @src: pm
 * @n: pm
 *Return: memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for (; i < n; i++)
{

	dest[i] = src[i];
}
return (dest);
}
