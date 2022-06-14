#include<stdio.h>
#include<string.h>
#include<math.h>
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

	int len;

	i = 0;

	k = 0;

	i = strlen(str);
	if (i % 2 != 0)
	{
		len = (i - 1) / 2;
	}
	else 
		len = i / 2;

	for (k = len; k < i; k++)
	{
		printf("%c", *(str + k));
	}
	printf("\n");
}
