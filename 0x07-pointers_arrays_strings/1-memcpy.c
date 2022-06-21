#include<stdio.h>
/**
*	*_memcpy - to write function
*	@dest: character
*	@src: character
*	@n: integer
*	Description: to copies memory area
*	Return: always 0
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	char *m;

	m = dest;

	for (k = 0; k < n; k++)
	{
		*dest = *src;
		src++;
	}
	return (m);
}
