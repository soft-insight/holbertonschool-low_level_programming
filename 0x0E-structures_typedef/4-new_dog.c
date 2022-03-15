#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _slen - length of string
 * @s: string
 * Return: the length
 */

int _slen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * *new_dog - create a copy of name and owner
 * @name: the name of the dog
 * @age: its age
 * @owner: its owner
 * Return: an assigned struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog; /**/
	int i;
	int len_name = _slen(name);
	int len_owner = _slen(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(len_name + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < len_name; i++)
		new_dog->name[i] = name[i];
	new_dog->age = age;
	new_dog->owner = malloc(len_owner + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i < len_owner; i++)
		new_dog->owner[i] = owner[i];
	return (new_dog);
}
