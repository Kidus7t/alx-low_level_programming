#include "main.h"

/**
 * _pow_recursion- returning exponential results
 * @x: pm
 * @y: pm
 * Return: the result
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
else if (y == 0)
	return (1);
return (x * _pow_recursion(x, y - 1));
}
