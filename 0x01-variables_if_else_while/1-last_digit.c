#include <stdio.h>

/**
 * main - Entry point
 *
 * Descrption:
 *
 * Return: Alwaus 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	putchar("Last digie of $d\n", n);
	if (n > 5)
		putchar("and is greater than 5");
	else if ((n < 7) && !(0))
		putchar("and is 0");
	else
		putchar("and is 0")
	return (0);
}
