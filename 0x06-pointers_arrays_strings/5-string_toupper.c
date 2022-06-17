#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*	string_toupper - copies a string
*	@a: array
*	Description: copies a string
*	Return: always 0
*/
char *string_toupper(char *a)
{
	char *res;

	res = a;

	while (*a != '\0')
	{
		if (*a > 97 && *a < 122)
		{
			*a -= 32;
		}

		a++;
	}
	return (res);
}
