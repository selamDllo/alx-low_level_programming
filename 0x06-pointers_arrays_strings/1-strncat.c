#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*	*_strncat - concatenate two string
*	@dest: string
*	@n: intger
*	@src: string
*	Description: concatenate two string
*	Return: always 0
*/
char *_strncat(char *dest, char *src, int n)
{
	char *ptr;

	ptr = dest + strlen(dest);

	while (*src != '\0' && n--)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}
