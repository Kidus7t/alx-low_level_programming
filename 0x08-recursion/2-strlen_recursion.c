#include "main.h"

/**
 * _strlen_recursion- returning length of screen
 * @s: pm
 * Return: length
 */

int _strlen_recursion(char *s)
{
int len = 0;
if (*s)
{
len++;
len += _strlen_recursion(s + 1);
}
return (len);
}
