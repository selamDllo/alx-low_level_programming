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
	int i, add, count;

	int changes[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	count = 0;
	i = 0;
	add = atoi(argv[1]);
	while (add > 0)
	{
		while (add < changes[i])
		{
			i += 1;
		}
		add -= changes[i];
		count += 1;
	}

	printf("%d\n", count);
	return (0);
}

