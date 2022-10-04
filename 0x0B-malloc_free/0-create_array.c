#include "main.h"

/**
 * create_array- creating array
 * @size: pm
 * @c: pm
 * Return: Null
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
	return (Null);
array = malloc(sizeof(char) * size);
if (array == Null)
	return (Null);
for (i = 0; i < size; i++)
	array[i] = c;
return (array);
}
