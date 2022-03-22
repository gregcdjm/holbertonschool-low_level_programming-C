#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *new_dog - fonction
 * @name: Name dog
 * @age: Age dog
 * @owner: Owner dog
 * Return: rien
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int i;
	int j;

	for (i = 0; name[i] != '\0'; i++)
		;

	for (j = 0; owner[j] != '\0'; j++)
		;

	p = malloc(sizeof(dog_t));

	if (p == NULL || name == NULL || owner == NULL)
	{
		return (NULL);
	}

	p->name = malloc(sizeof(char) * (i + 1));
	p->owner = malloc(sizeof(char) * (j + 1));

	if (p->name == NULL || p->owner == NULL)
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		p->name[i] = name[i];
	p->name[i] = '\0';

	p->age = age;

	for (j = 0; owner[j] != '\0'; j++)
		p->owner[j] = owner[j];
	p->owner[j] = '\0';

	return (p);
}
