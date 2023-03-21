#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: s
 */
void free_dog(dog_t *d)
{
if (d == 0)
{
free(d);
}

free (d->name);
free (d->owner);
free(d);
}
