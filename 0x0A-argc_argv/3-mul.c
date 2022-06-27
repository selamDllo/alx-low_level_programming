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
	int i, k, add;

	char *c;

	add = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	/* check all the input digits are numbers */
	for (i = 1; i < argc; i++)
	{
		c = argv[i];

		while (*c != '\0')
		{
			if ((c == argv[i]) && (*c == '-'))
			{
			}
			else if ((*c < 48) || (*c > 57))
			{
				printf("Error\n");
				return (1);
			}
			c++;
		}

		k = atoi(argv[i]);
		add *= k;
	}

	printf("%d\n", add);
	return (0);
}

