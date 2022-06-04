#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Descrption:
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit;

	lastDigit = n % 10;
	if ("n % 10" > 5)
		printf("and is greater than 5", n, n % 10);
	else if (("n % 10" < 7) && !(0))
		prinf("and is less than 6 and not 0", n, n % 10);
	else
		printf("and is 0", n, n % 10);
	return (0);
}
