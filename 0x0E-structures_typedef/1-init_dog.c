#include<stdio.h>
#include "dog.h"
/**

*	@age: number
*	@owner: string
*	Description: to practice structures
*	Return: always 0
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;

	d->age = age;

	d->owner = owner;
}
