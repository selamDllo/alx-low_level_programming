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

	if (*s)
	{
		i = strlen(s);
		s2 = (char *) calloc(i - 1, sizeof(char));
		putchar(*(s + (i - 1)));
		strncpy(s2, s, i - 1);
		s2[i - 1] = '\0';
		_print_rev_recursion(s2);
	}
	else
	{
		return;
	}

}

