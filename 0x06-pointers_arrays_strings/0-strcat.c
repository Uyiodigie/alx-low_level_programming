#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination parameter
 * @src: source parameter
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int len1 = *dest, len2 = *src, i;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = '\0';
	}

	_putchar('\n');

	return (dest);
}
