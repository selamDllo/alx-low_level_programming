#include<stdio.h>
/**
*	puts_half - print string
*	@str: string
*	Description: half of string
*	Return: always 0
*/
void puts_half(char *str)
{
	int i;

	int k;

	i = 0;

	k = 0;

	while (i != '\0')
	{
		i++;
	}
	for (k = (i / 2); k > i; k++)
	{
			printf("%c", *(str + k));
	}
	printf("\n");
}
