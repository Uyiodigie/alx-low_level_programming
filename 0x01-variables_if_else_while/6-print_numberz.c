#include <stdio.h>

/**
 * main - prints single digits from base ten, using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
