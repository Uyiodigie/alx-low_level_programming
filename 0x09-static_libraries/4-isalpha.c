#include "main.h"

/**
 * _isalpha - checkes for alphabet
 * @c: paramter
 * Return: 0 success
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
