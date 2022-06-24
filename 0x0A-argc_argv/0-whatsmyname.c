#include "main.h"

/**
 * main - prints it's name followed by a new line
 * @argc: argument count
 * @argv: argument vect0r
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	if (argc == 1 && argv[0])
		_putchar(*argv[0]);
	return (0);
}
