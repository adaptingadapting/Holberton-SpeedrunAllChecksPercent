#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: returns a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *rdog;

	rdog = malloc(sizeof(struct dog));
	if (!rdog)
		return (NULL);
	rdog->name = malloc(sizeof(name));
	if (!rdog->name)
		return (NULL);
	_strcpy(rdog->name, name);
	rdog->age = age;
	rdog->owner = malloc(sizeof(owner));
	if (!rdog->owner)
		return (NULL);
	_strcpy(rdog->owner, owner);
	return (rdog);
}
