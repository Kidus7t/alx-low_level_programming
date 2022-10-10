#include "dog.h"
#include <stdlib.h>

/**
 * init_dog- initializing variables
 * @d: pm
 * @name: pm
 * @owner: pm
 * @age: pm
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;

}

}
