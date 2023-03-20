#include "dog.h"
#include <stldib.h>

/**
 * free_dog - function that frees dogs
 * @d: dog info
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
	}
}

