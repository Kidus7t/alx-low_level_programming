#include <stdio.h>
/**
 * main- printing the alphabet except q and e
 * Description: using the main function
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = "a" ; ch <= "z" ; ch++)
{
	if (ch == "e" || ch == "q")
		continue;
	putchar(ch);
}
putchar("\n");
return (0);
}
