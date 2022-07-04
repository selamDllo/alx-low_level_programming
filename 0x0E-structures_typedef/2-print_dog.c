#include<stdio.h>
#include "dog.h"

/**
*       init_dog -  to practice structures
*       @d: string
*       Description: to practice structures
*       Return: always 0
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
        {
                printf("nothing");
        }


        d->name = name;
        if (d->name == NULL)
        {
                printf("name: nil");
        }

        d->age = age;

        if (d->age)
        {
                printf("age: nil");
        }

        d->owner = owner;
        if (d->owner == NULL)
        {
                printf("owner: nail");

        }
}

