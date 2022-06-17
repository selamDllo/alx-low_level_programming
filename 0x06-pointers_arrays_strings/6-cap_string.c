#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*	*cap_string - copies a string
*	@a: array
*	Description: copies a string
*	Return: the char pointer
*/
char *cap_string(char *a)
{
	char *res;

	res = a;

	while (*a != '\0')
	{
		if (*a == '\n' || *a == ',' || *a == ';' ||
			*a == '.' || *a == '!' ||
			*a == '?' || *a == '\"'
			|| *a == '(' || *a == ')' ||
			*a == '{' || *a == '}' ||
			*a == ' ' || *a == '\t')
		{
			a++;

			if (*a > 97 && *a < 122)
			{
				*a -= 32;
			}
			else if (*a == '\0')
			{
				break;
			}
		}
		else
		{
			a++;
		}
	}
	return (res);
}
