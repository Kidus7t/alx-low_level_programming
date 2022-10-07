#include "main.h"

/**
 * string_nconcat- concatenating a string
 * @s1: pm
 * @s2: pm
 * @n: pm
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;

unsigned int size1, size2, i;

size1 = 0;
size2 = 0;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
while (s1[size1] != '\0')
	size++;
while (s2[size2] != '\0')
	size2++;
if (n > size2)
	n = size2;
p = malloc((size1 + n + 1) * sizeof(char));

if (p == NULL)
	return (0);
for (i = 0; i < size1; i++)
	p[i] = s1[i];
for (; i < (size + n); i++)
	p[i] = s2[i - size1];
p[i] = '\0';

return (p);
}