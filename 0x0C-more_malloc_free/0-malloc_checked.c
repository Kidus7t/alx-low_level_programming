#include "main.h"

/**
 * malloc_checked- allocating memory
 * @b: pm
 * Return: null
 *
 */

void *malloc_checked(unsigned int b)
{
void *s;

s = malloc(b);
if (s == NULL)
	exit(98);
return (s);

}
