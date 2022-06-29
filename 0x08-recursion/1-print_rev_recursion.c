#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
*	_print_rev_recursion - to print string
*	@s: string
*	Description: to print the function
*	Return: always 0
*/

void _print_rev_recursion(char *s)
{
	int i;

	char *s2;

	i = strlen(s);

	if (i == 0)
	{
		putchar('\n');
		return;
	}
	else
	{

		s2 = malloc(sizeof(char) * (i - 1));
		strncpy(s2, s, i - 1);
		putchar(*(s + i - 1));

		_print_rev_recursion(s2);
	}

}

