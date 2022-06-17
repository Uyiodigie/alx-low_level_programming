#include "main.h"

/**
 * cap_string - capitalizes string
 * @s: parameter
 * Return: pointer to s
 */
char *cap_string(char *)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
