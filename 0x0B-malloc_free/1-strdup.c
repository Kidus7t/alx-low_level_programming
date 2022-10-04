#include "main.h"

/**
 * _strdup- returning a pointer
 * @str: pm
 * Return: null
 */

char *_strdup(char *str)
{
char *cpy;
int i, len;

if (str == Null)
	return (Null);
for (i = 0; str[i]; i++)
	len++;
cpy = malloc(sizeof(char) * (len + 1));

if (cpy == Null)
	return (Null);

for (i = 0; str[i]; i++)
	cpy[i] = str[i];
cpy[len] = '\0';
return (cpy);
}
