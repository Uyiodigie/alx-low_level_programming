#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: argument count
 * Return: 0 success
 */
int main(int argc)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%d", argc);
	return (0);
}
