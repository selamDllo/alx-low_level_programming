#include<stdio.h>
/**
*	print_rev - print the reverse
*	@s: dtring
*	Description: to print the reverse
*	Return: always 0
*/
void print_rev(char *s)
{
	int k;

	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	for (k = i; k >= 0; k--)
	{
		printf("%c", *(s + k));
	}
	/*printf("\n");*/
}
