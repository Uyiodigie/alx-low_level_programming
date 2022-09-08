#include "main.h"

/**
 * _strncpy - copies n number of string
 * @dest: destination string
 * @src: source string
 * @n: number of characters to copy
 * Return: pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
