#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - fonction
 * @d: Dog
 * Return: rien
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
