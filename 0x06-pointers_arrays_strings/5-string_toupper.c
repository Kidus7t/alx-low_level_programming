#include "main.h"

/**
 * string_toupper- changing lowercase to uppercase
 * @str: pm
 * Return: address
 */

char *string_toupper(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
	str[i] -= 32;
i++
}
return (str);
}
