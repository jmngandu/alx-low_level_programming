#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: pointer to dog
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
