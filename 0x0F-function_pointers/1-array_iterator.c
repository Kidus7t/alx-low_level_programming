#include "function_pointers.h"

/**
 * array_iterator- executing a function
 * @array: pm
 * @size: pm
 * @action: pm
 * Return: null
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (!array || !action)
	return;
for (i = 0; i < size; i++)
	action(array[i]);
}
