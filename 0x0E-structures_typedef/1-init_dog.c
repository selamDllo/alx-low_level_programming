#include<stdio.h>
/**
*	init_dog - to practice structure
*	@name: string
*	@age: number
*	@owner: string
*	Description: to practice structures
*	Return: always 0
*/
struct dog
{
	char *name;

	float age;

	char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;

	d->age = age;

	d->owner = owner;
}
