#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string parameter
 * Return: pointer to destination
 */
char *leet(char *s)
{
	int i = 0, j;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + i) == lower[i] || *(s + i) == upper[i])
			{
				*(s + i) = numbers[i];
				break;
			}
		}
		i++;
	}
	return (s);
}
