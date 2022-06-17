#include<stdio.h>
#include<string.h>

/**
*	_strncpy - copies a string
*	@dest: string
*	@src: string
*	@n: intger
*	Description: copies a string
*	Return: always 0
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *tmp;

	tmp = dest;

	while (*src != '\0' && n--)
	{
		*tmp++ = *src++;
	}

	return (dest);
}

