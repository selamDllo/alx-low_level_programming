#include<stdio.h>
#include<stdlib.h>

/**
*	main - print name
*	@argc: integer
*	@argv: integer
*	Description: to print name
*	Return: always 0
*/
int main(int argc, char **argv)
{
	int i;

	int k;

	int add;

	add = 0;

	if (argc != 3)
	{
		printf("Error");

		return (1);
	}


	for (i = 0; i < argc; i++)
	{

		k = atoi(argv[i]);

		add += k;

		printf("%d\n", add);
	}
	return (0);

}

