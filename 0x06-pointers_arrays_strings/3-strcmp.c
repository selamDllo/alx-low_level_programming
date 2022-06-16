#include<stdio.h>
#include<string.h>
/**
*	*_strncpy - copies a string
*	@s1: string
*	@s2: string
*	Description: copies a string
*	Return: always 0
*/
int _strcmp(char *s1, char *s2)
{
	int l;

	int smallest;

	int k;

	int m;

	k = strlen(s1);
	m = strlen(s2);

	if (k < m)
	{
		smallest = k;
	}
	else 
	{
		smallest = m;
	}
 
	for (l = 0; l < smallest; l++)
	{
		if (*(s1 + l) == *(s2 + l))
		{
		
		}
		else if (*(s1 + l) > *(s2 + l))
		{
			return (15);
		}
		else if (*(s1 + l) < *(s2 + l))
		{
			return (-15);
		
		}
	}
	if (k != m)
	{
		if (k < m)
		{
			return (-15);
		}
		else
		{
			return (15);
		}
	}
	return (0);
}
