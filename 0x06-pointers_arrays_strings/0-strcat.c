#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination parameter
 * @src: source parameter
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int lenO = *dest, lenT = *src, i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	for (i = 0; i <= lenT; i++)
	{
		dest[lenO + i] = '\0';
	}

	_putchar('\n');

	return (dest);
}
