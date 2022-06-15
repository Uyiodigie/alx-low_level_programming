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
	int len1 = *dest, len2 = *src, i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		j++;
	}
	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = '\0';
	}

	_putchar('\n');

	return (dest);
}
