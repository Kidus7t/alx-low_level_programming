#include "dog.h"
#include <stdlib.h>

/**
 * free_dog- function freeing dogs
 * @d: pm
 * Return: null
 */

void free_dog(dog_t *d)
{
if (d == NULL)
	return;
free(d->name);
free(d->owner);
free(d);


}
