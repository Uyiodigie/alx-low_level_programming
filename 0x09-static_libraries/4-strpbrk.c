#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strpbrk - matches first string to second string
 * @s: pointer to strin s
 * @accept: parameter
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
