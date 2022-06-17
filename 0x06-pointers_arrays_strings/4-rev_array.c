#include "main.h"

/**
* reverse_array - reverses the content of an array
* @a: integer parameter
* @n: integer parameter
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i, j, rev;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			rev = *(a + j);
			*a(j + i) = *(a + (j - 1));
			*(a + (j - 1)) = rev;
		}
	}
}
