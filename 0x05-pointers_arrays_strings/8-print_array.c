#include<stdio.h>
/**
*	puts2 - print every character
*	@a: string
*	@n: integer
*	Description: to print character
*	Return: always 0
*/
void print_array(int *a, int n)
{
	int k;

	while (*(a + n) != '\0')
	{

		n++;
	}
	for (k = 0; k < (n - 3) ; k++)
	{
		printf("%d, ", *(a + k));

	}
	/*printf("%d", *(a + (n - 2)));*/
	printf("\n");
}
