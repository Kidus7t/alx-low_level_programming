#include "main.h"

/**
 * leet- encoding a string
 * @str: pm
 * Return: it does
 */

char *leet(char *str)
{
int i = 0;

while (str[i] != '\0')
{
str[i] = transform(str[i]);
i++;
}
return (str);
}

/**
 * transform- helper function
 * @x: pm
 * Return: yes
 */

char transform(char x)
{
char ml[8] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};
char mu[8] = {'O', 'L', '\0', 'E', 'A', '\0', '\0', 'T'};
int i = 0;
char r = x;
while (i < 8)
{
if (x == ml[i] || x == mu[i])
{
r = i + '0';
break;
}
i++;
}
return (r);
}
