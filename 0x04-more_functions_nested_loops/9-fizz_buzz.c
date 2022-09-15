#include <stdio.h>

/**
 * main- printing from 1-100
 * Return: 0
 */
int main(void)
{
int num;
char f[] = "Fizz";
char b[] = "Buzz";
char fb[] = "FizzBuzz";

for (num = 1; num <= 100; num++)
{
if (num == 100)
{
printf("%s", b);
}
else if ((num % 3 == 0) && (num % 5 == 0))
{
printf("%s ", fb);
}
else if (num % 3 == 0)
{
printf("%s ", f);
}
else if (num % 5 == 0)
{
printf("%s ", b);
}
else
{
printf("%d ", num);
}
}
putchar('\n');
return (0);
}
