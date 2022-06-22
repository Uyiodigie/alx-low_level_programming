#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to s
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_strlen_recursion(s + 1);
	}
}
