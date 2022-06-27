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

	if (argc < 3)
	{
		printf("Error");

		return (1);
	}
	
	/* check all the input digits are numbers */
	for (i = 1; i < argc; i++)
	{
		char *c = argv[i];
		
		while (*c != '\0')
		{
			if ((*c < 48) || (*c > 57))
			{
				printf("Error");
				return (0);
			}

			c++;
		}

	}
	
	for (i = 1; i < argc; i++)
	{

		k = atoi(argv[i]);
		
		add += k;

	}

	printf("%d\n", add);

	return (0);

}

