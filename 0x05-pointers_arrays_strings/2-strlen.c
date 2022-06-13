#include<stdio.h>
/**
*	_strlen - length of a string
*	@s: number
*	Description: to find length of string
*	Return: always 0
*/
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
