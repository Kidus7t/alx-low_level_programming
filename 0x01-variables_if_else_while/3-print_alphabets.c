#include <stdio.h>
/**
 * main- printing alphabet lowercase then uppercase
 * Description: using the main function
 * Return: 0
 */
int main(void)
{
char c;
for (c = "a" ; c <= "z" ; c++)
{
putchar(c);
}
for (c = "A" ; c <= "Z" ; c++)
{
	putchar(c);
}
putchar("\n");
return (0);
}
