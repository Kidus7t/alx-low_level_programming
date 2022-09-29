#include "main.h"

/**
 * factorial- factorial of a given number
 * @n: pm
 * Return: factorial
 */

int factorial(int n)
{
int result;

if (n < 0)
	return (-1);
else if (n >= 0 && n <= 1)
	return (1);
result = factorial(n - 1);
return (n * result);
}
