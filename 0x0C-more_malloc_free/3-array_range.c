#include "main.h"

/**
 * array_range- creating array of integers
 * @min: pm
 * @max: pm
 * Return: pointer void
 */

int *array_range(int min, int max)
{
int *arr, i, t;

i = 0;
t = min;
if (min > max)
	return (0);
arr = malloc((max - min + 1) * sizeof(int));

if (!arr)
	return (0);
while (i <= max - min)
	arr[i++] = t++;
return (arr);

}
