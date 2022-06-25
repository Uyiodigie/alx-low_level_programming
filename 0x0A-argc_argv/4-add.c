#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc <= 1)
		printf("0\n");
	else if (!(argv[2] >= 48 && argv[2] <= 58) || !(argv[3] >= 48 && argv[3] <= 58))
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d", atoi(argv[1]) + atoi(argv[2]));
	return (0);
