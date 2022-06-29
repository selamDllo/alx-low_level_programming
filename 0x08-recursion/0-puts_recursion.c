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

	i = strlen(s);

	if (i == 0)
	{
		return;
	}
	else
	{

	putchar(*s);

	s++;

	_puts_recursion(s);

	}

}
