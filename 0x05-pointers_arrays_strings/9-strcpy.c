#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copeis the string pointed to by src
 * @dest: destination pointer parameter
 * @src: source pointer parameter
 * Return: pointer to destination
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
