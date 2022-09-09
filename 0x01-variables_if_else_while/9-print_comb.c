#include <stdio.h>
/**
 * main- printing all possible combination of single digits
 * Description: using the main function
 * Return: 0
 */
int main(void)
{
int m;
for (m = 48 ; m <= 57 ; m++)
{
putchar(m);
if (m < 57)
{	
putchar(44);
putchar(' ');
}
}
putchar('\n');
return (0);
}
