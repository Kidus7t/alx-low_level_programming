#include "main.h"

/**
 * _strlen- capitalizing all words
 * @s: pm
 * Return: length
 */

int _strlen(char *s)
{
int l = 0;

while (*(s + l) != '\0')
	l++;
return (l);
}

/**
 * cap_string- capitalize
 * @str: pm
 * Return: sth
 */

char *cap_string(char *str)
{
int i = 0;

while (str[++i])
{
while (!(str[i] >= 'a') && (str[i] <= 'z'))
{
i++;
}
if (str[i - 1] == ' ' || str[i - 1] == '\t' ||
str[i - 1] == '\n' ||
str[i - 1] == ',' || str[i - 1] == ';' ||
str[i - 1] == '.' || str[i - 1] == '!' ||
str[i - 1] == '?' || str[i - 1] == '"' ||
str[i - 1] == '(' ||
str[i - 1] == ')' ||
str[i - 1] == '{' ||
str[i - 1] == '}')
{
str[i] -= 32;
}
}
return (str);
}

