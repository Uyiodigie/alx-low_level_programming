#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination parameter
 * @src: source parameter
 * @n: parameter for number of characters to append
 * Return: pointer to dest
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
		ln2++;
	}
	return (dest);
}
