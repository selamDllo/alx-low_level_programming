#include<stdio.h>
/**
*	main - print the fizz and buzz
*	Description: print the number
*	Return: always 0
*/
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			printf("fizz");
		}
		else if (n % 5 == 0)
		{
			printf("buzz");
		}
		else
		{
			printf("n");
		}
	}
	return (0);
}
