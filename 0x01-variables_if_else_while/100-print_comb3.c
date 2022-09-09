#include <stdio.h>
/**
 * main-printing two digit combinations
 * Description: using the main function
 * Return: 0
 */
int main(void)
{
int = chr;
for (chr = 48 ; chr <= 57 ; chr++)
{
for (int j = chr + 1 ; j <= 57 ; j++)
{
if (chr <= j)
{
putchar(chr);
putchar(j);
if (chr != 8)
{
putchar(44);
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
