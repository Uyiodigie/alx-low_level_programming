#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct
 * @d: param
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("%s\n", d->name);
	printf("%s\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("%s\n", d->owner);
	if (d == NULL)
		return;
}
