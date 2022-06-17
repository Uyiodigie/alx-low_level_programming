#include "main.h"

/**
 * cap_string - capitalizes string
 * @s: parameter
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i = 0;

	/*while ((s[i] >= 'a' && s[i] <= 'z'))*/
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
