#include "main.h"

/**
 * _strstr - lacates a substring
 * @haystack: pointer to haystack
 * @needle: pointer to needle
 * Return: pointer to begining of substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i] != '\0')
	{
		for (j = 0; j < '\0'; j++)
		{
			if (haystack[i + j] == *needle)
			{
				haystack = needle;
			}
			else
				break;
		}
	}
	return (0);
}
