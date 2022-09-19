#include <string.h>
#include "main.h"

/**
 * puts_half- WW
 * @str: parameter
 * Return: null
 */

void puts_half(char *str)
{
int y, z, i;

y = strlen(str);
if (y % 2 == 1)
	z = y / 2 + 1;
else
	z = y / 2;
for (i = z; i < y; i++)
	putchar(str[i]);
putchar(10);
}
