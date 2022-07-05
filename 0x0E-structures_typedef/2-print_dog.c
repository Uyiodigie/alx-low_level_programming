#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct
 * @d: param
 */
void print_dog(struct dog *d)
{
	if (d->name == 0)
		printf("Name: (nil)\n");
	else
		printf("%s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == 0)
		printf("Owner: (nil)\n");
	else
		printf("%s\n", d->owner);
	if (d == 0)
		return;
}
