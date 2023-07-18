#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints the attributes of a struct.
 *
 * @d: Pointer to the struct.
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age <= '\0')
		printf("Age: %f\n", 0);
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
