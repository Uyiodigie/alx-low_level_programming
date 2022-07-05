#ifndef DOGS_H
#define DOGS_H

/**
 * struct dog - define a new type
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float *age;
	char *owner;
};

typedef struct dog dog;

#endif
