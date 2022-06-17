#include "main.h"

/**
* cap_string - capitalizes strings
* @s: input string.
* Return: the pointer to dest.
*/
char *cap_string(char *s)
{
	int i = 0, j;
	int strs[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;
	i++;
	while (s[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (s[j] == strs[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - 32;
				break;
			}
		}
		i++;
	}
	return (s);
}
#include "main.h"

/**

 * cap_string - capitalizes all words of a string

 * @s: input string.

 * Return: the pointer to dest.

 */

char *cap_string(char *s)

{

	int count = 0, i;

	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + count) >= 97 && *(s + count) <= 122)

		*(s + count) = *(s + count) - 32;

	count++;

	while (*(s + count) != '\0')

	{

		for (i = 0; i < 13; i++)

		{

			if (*(s + count) == sep_words[i])

			{

				if ((*(s + (count + 1)) >= 97) && (*(s + (count + 1)) <= 122))

					*(s + (count + 1)) = *(s + (count + 1)) - 32;

				break;

			}

		}

		count++;

	}

	return (s);

}
