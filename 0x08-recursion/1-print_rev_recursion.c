#include<stdio.h>
#include<string.h>

/**
*	_puts_recursion - to print string
*	@s: string
*	Description: to print the function
*	Return: always 0
*/

void _print_rev_recursion(char *s)
{
	int i;

	i = strlen(s);

	if (*s == 0)
	{
		putchar('\n');
		return;
	}
	else
	{

	putchar(*(s+i));

	*(s+i) = '\0';

	_print_rev_recursion(s);

	}

}
