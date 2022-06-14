#include<stdio.h>
/**
*	puts2 - print every character
*	@str: string
*	Description: to print character
*	Return: always 0
*/
void puts2(char *str)
{
	int k;

	int i;

	i = 0;

	while (i != '\0')
	{

		i++;
	}
	for (k = 0; k < i; k++)
	{
		if (k % 2 != 0)
		{
			printf("%c", *(str + k));
		}
	}
	printf("\n");
}
