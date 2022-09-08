#include "main.h"

/**
 * _strncat - concatenates n strings to dest
 * @dest: destination string
 * @src: source string
 * @n: number of characters to append
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int ln1 = 0, ln2 = 0;

	while (*(dest + ln1) != '\0')
	{
		ln1++;
	}

	while (ln2 < n)
	{
		*(dest + ln1) = *(src + ln2);
		if (*(src + ln2) == '\0')
			break;
		ln1++;
		ln1++;
	}
	return (dest);
}
