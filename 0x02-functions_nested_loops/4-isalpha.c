#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 *
 * @c: interger parameter
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	char i;

	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i >= 'Z'))
		return (1);
	else
		return (0);
}
