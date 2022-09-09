#include <stdio.h>
/**
 * main- printing alphabet in reverse
 * Description: using the main function
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'z' ; ch >= 'a' ; ch--)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
