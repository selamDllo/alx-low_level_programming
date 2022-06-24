#include<stdio.h>

/**
*	main - print name
*	@argc: integer
*	@argv: character
*	Description: to print name
*	Return: always 0
*/
int main(int argc, char **argv)
{
	if (argv != NULL)
	{
		printf("%d\n", (argc - 1));
	}

	return (0);
}

