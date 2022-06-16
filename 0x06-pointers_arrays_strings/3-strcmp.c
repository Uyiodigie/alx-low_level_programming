#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: destination string
 * @s2: source string
 * Return: pointer to s1
 */
int _strcmp(char *s1, char *s2)
{
	int i, fail;

	for (i = 0; s1[i] != '\0' || s2[i] != 0; i++)
	{
		if (s1[i] != s2[i])
		{
			fail = 1;
			break;
		
		}
	}
	if (fail != 1)
		return (s1);
}
