#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - Releases memory allocated for a 'dog' structure.
 *
 * @d: The 'dog' structure to be freed.
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
