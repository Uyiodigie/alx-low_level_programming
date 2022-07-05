#ifndef DOGS_H
#define DOGS_H

/**
 * struct dog - define a new type
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
typedef struct dog
{
	char *name, *owner;
	float *age;
} dog;

#endif
