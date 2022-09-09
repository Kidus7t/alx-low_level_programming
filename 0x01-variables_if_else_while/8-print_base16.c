#include <stdio.h>
/**
 * main- printing all numbers of base 16
 * Description: using the main function
 * Return: 0
 */
int main(void)
{
int num;
char c;
for (num = 48 ; num <= 57 ; num++)
{
putchar(num);
}
for (c = 'a' ; c <= 'f' ; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
