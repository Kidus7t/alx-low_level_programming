#include "main.h"

/**
 * str_concat- concatenating a string
 * @s1: pm
 * @s2: pm
 * Return: concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
char *concat_str;
int i, len, ci;

len = 0;
ci = 0;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for (i = 0; s1[i] || s2[i]; i++)
	len++;
concat_str = malloc(sizeof(char) * len);

if (concat_str == NULL)
	return (NULL);
for (i = 0; s1[i]; i++)
	concat_str[ci++] = s1[i];
for (i = 0; s2[i]; i++)
	concat_str[ci++] = s2[i];
return (concat_str);
}
