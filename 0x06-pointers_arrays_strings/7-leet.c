#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*	leet - copies a string
*	@a: array
*	Description: copies a string
*	Return: the char pointer
*/
char *leet(char *a)
{
	char *res;
	int j;
	char c[] = {'a', 'e', 'o', 't', 'l' };
	char d[] = {'A', 'E', 'O', 'T', 'L' };
	char v[] = {'4', '3', '0', '7', '1' };


	res = a;
	for (j = 0; j < 5; j++)
	{
		while (*a != '\0')
		{
			if (*a == c[j] || *a == d[j])
			{
				*a = v[j];
			}
			a++;
		}
		a = res;
	}

	return (res);
}
