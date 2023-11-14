#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - check the code
 *
 * @name :name
 * @age : age
 * @owner: owner
 *
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int index1 = 0;
	int index2 = 0;
	int i;
	dog_t *new_dog;

	while (name[index1])
		index1++;
	while (owner[index2])
		index2++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(name) * (index1 + 1));
	new_dog->owner = malloc(sizeof(owner) * (index2 + 1));
	new_dog->age = age;
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < index1 ; i++)
		new_dog->name[i] = name[i];
	for (i = 0; i < index2 ; i++)
		new_dog->owner[i] = owner[i];
	new_dog->name[index1] = '\0';
	new_dog->owner[index2] = '\0';
	return (new_dog);
}
