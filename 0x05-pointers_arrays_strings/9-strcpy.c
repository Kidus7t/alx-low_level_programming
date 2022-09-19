#include "main.h"

/**
 * _strcpy- la la
 * @dest: l
 * @src:blah
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
int n;
while (*(src + n) != '\0')
{
*(dest + n) = *(src + n);
	n++;
}
*(dest + n) = '\0';
return (dest);
}
