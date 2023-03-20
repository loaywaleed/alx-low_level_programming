#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *p;

	p = malloc(sizeof(dog_t));
	i = 0, j = 0;
	while(name[i])
	{
		i++;
	}
	while(owner[j])
	{
		j++;
	}
	p->name = malloc(i + 1);
	p->owner = malloc(j + 1);

	if (p->name == NULL || p->owner == NULL)
	{
		free(p->name), free(p->owner), free(p);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		p->name[k] = name[k];
	}
	p->name[k] = '\0';
	for (k = 0; k < j; k++)
	{
		p->owner[k] = owner[k];
	}
	p->owner[k] = '\0';
	p->age = age;
	return (p);
}
