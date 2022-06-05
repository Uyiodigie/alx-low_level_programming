#include <stdio.h>

/**
 * main - prints alphabets in stdout
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
