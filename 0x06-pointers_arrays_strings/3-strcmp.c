#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*	_strcmp - copies a string
*	@s1: string
*	@s2: string
*	Description: copies a string
*	Return: always 0
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 > *s2)
		{
			return (15);
		}
		else if (*s1 < *s2)
		{
			return (-15);
		}
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else if (*s1 == '\0')
	{
		return (15);
	}
	else if (*s2 == '\0')
	{
		return (-15);
	}
	return (0);
}

