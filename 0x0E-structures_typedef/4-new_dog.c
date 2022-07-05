#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strcpy - copies a string
 * @src: source
 * Return: pointer to ptr
 */
char *_strcpy(char *src)
{
	int i, len;
	char *ptr;

	if (src == NULL)
		return (NULL);
	for (len = 0; src[len] != '\0'; len++)
		;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; src[i] != '\0'; i++)
	{
		ptr[i] = src[i];
	}
	ptr[i] = '\0';
	return (ptr);
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
		free(newDog);
		return (NULL);
	}
	(*newDog).name = new_name;
	(*newDog).age = age;
	new_owner = _strcpy(owner);
	if (new_owner == NULL)
	{
		free((*newDog).name);
		free(newDog);
		return (NULL);
	}
	(*newDog).owner = new_owner;
	return (newDog);
}
