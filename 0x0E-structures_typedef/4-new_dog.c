#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
		return (NULL);
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	new_name = _strcpy(name);
	if (new_name == NULL)
	{
		free(*newDog);
		return (NULL);
	}
	(*newDog).name = new_name;
	(*newDog).age = age;
	new_owner = _strcpy(owner);
	if (new_owner == NULL)
	{
		free((*newDog).name);
		free(*newDog);
		return (NULL);
	}
	(*newDog).owner = new_owner;
	return (newDog);
}
