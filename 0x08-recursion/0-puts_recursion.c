#include<stdio.h>
#include<string.h>
/**
*	_puts_recursion - to print string
*	@s: string
*	Description: to print the function
*	Return: always 0
*/
void _puts_recursion(char *s)
{
	int i;

	int k;

	i = strlen(s);

	for (k = 0; k < i; k++)

	{

	printf("%c\n", *s);

	}

}
