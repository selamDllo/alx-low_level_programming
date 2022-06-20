#include<stdio.h>
/*
*	*_memset - to print array
*	@s: character
*	@b: character
*	@n: intger
*	Description: to print array
*	Return: always 0
*/
char *_memset(char *s, char b,unsigned int n)
{
	int k;

	int tmp;

	for (k = 0; k < n; k++)
	{

		*s = b;
		*s++;
	}
}
	
