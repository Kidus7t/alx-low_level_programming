#include <stdio.h>

/**
 * main- printing from 1-100
 * Return: 0
 */

void main(void)
{
int num;

for (num = 1; num <= 100; num++)
{
if ((num % 3) && (num % 5))
{
printf("FizzBuzz ");
}
else if (num % 3)
{
printf("Fizz ");
}
else if (num % 5)
{
if (num != 100)
{
printf("Buzz ");
}
else
printf("Buzz");
}
else
printf("%d ", num);
}
}
