#include "main.h"

/**
* reverse_array - reverses the content of an array
* @a: integer parameter
* @n: integer parameter
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
