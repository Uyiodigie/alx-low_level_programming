#include "main.h"

/**
 * cap_string - capitalizes string
 * @s: parameter
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i = 0, j;

	while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'a' && s[i] <= 'z'))
	{
		j = 0;
		while (s[j] != '\0')
		{
			if (s[j] >= 'a' && s[j] <= 'z')
				s[i] = s[i] - 32;
			j++;
		}
		i++;
	}
	return (s);
}
