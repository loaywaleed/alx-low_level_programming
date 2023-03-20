#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creates a dog struct
 * @name: dog's name
 * @age: its age
 * @owner: dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
