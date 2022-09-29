#include "main.h"

/**
 * _sqrt_recursion- returning the natural sqrt
 * @n: pm
 * Return: the sqrt
 */

int _sqrt_recursion(int n)
{
if (n == 1 || n == 0)
	return (n);
return (_sqrt(0, n));
}

/**
 * _sqrt- returning a sqrt
 * @n: pm
 * @x: pm
 * Return: the square root
 */

int _sqrt(int n, int x)
{
if (n > x / 2)
	return (-1);
else if (n * n == x)
	return (n);
return (_sqrt(n + 1, x));

}
