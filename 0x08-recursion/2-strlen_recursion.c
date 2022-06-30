#include<stdio.h>
#include<string.h>
/**
*	_strlen_recursion - print length
*	@s: string
*	Description: to print length
*	Return: always 0
*/
int _strlen_recursion(char *s)
{
	int i;

	int k;

	k = 0;

	i = strlen(s);

	if (i != '\0')
	{
		k = i + 1;
		s++;
		_strlen_recursion(s);
	}
	return (k);

}
