#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i, result;

	for (i = 0; i < argc; i++)
	{
		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			printf("%s", argv[i]);
			result *= atoi(argv[i]);
		}
	}
	printf("%d", result);
	return (0);
}
