#include<stdio.h>
#include<string.h>
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

	i = strlen(str);
	for (k = ((i - 1) / 2); k < i; k++)
	{
		printf("%c", *(str + k));
	}
	printf("\n");
}
