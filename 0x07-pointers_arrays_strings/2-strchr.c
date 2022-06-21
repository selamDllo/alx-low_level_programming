#include<stdio.h>
#include<string.h>
/**
*	*_strchr - locates character
*	@s, character
*	@c: character
*	Description: locates a character
*	Return: always 0
*/
char *_strchr(char *s, char c)
{
	int k;

	int m;

	m = strlen(s);

	for (k = 0; k < m; k++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
