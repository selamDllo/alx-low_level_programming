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

	int mul;

	mul = 0;

	if (argc != 3)
	{
		printf("Error");

		return (-1);
	}

	i = atoi(argv[1]);

	k = atoi(argv[2]);

		mul = i * k;

		printf("%d\n", mul);

	return (0);

}
