#include "main.h"

/**
 * alloc_grid- returning a pointer array
 * @width: pm
 * @height: pm
 * Return: Null
 */

int **alloc_grid(int width, int height)
{
int **array;
int i, j;

i = 0;
if (width == 0 || height == 0)
	return (Null);
array = (int **) malloc(sizeof(int *) * height);
if (array != Null)
{
for (; i < height; i++)
{
array[i] = (int *) malloc(sizeof(int) * width);
if (array[i] != Null)
{
for (j = 0; j < width; j++)
	array[i][j] = 0;
}
else
{
while (i >= 0)
{
free(array[i]);
i--;
}
free(array);
return (Null);
}
}
return (array);
}
else
return (Null);
}
