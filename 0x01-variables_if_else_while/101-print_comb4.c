#include <stdio.h>
/**
 * main - displays 3 combo numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;
	int b = 49;
	int c = 50;
	int counter = 48;

	while (a < 56)
	{
		while (b > a)
		{
			while (c != 58)
			{
				if (c > b)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a < 55)
					{
						putchar(',');

						putchar(' ');
					}
				}
				c++;
			}
			c = 50;
		}
		b++;
	b = 49;
	a++;
	counter++;
	}
	putchar('\n');
	return (0);
}
