#include<stdio.h>
#include "dog.h"
#include<stdlib.h>
/**
 *initialize a variable of type struct dog
 * @name = name of dog initialized
 * @age = age of the dog initialized
 * @owner = owner of the dog initialised
 * @d = pointer to the structer dog
 *
 * init_dog: initialize a variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
