#ifndef MAIN_H
#define MAIN_H
/**
*	struct dog - to practice structure
*	@name: string
*       @age: number
*       @owner: string
*       Description: to practice structures
*       Return: always 0
*/
struct dog 
{
	char *name;

	float age;

	char *owner;

};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
