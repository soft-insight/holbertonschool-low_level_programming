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
	dog_t *little_dog; /**/
	int i;
	int len_name = _slen(name);
	int len_owner = _slen(owner);

	little_dog = malloc(sizeof(dog_t));
	if (little_dog == NULL)
		return (NULL);

	little_dog->name = malloc(len_name + 1);
	if (little_dog->name == NULL)
	{
		free(little_dog);
		return (NULL);
	}
	for (i = 0; i < len_name; i++)
		little_dog->name[i] = name[i];
	little_dog->name[i] = '\0'; 

	little_dog->age = age;
	/* */
	little_dog->owner = malloc(len_owner + 1);
	if (little_dog->owner == NULL)
	{
		free(little_dog->name);
		free(little_dog);
		return (NULL);
	}
	for (i = 0; i < len_owner; i++)
		little_dog->owner[i] = owner[i];
	little_dog->owner[i] = '\0';


	return (little_dog);
}
