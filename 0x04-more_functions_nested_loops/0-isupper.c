#include<stdio.h>
/**
*	_isupper - to check is upper
*	@c: is upper
*	Description: check the given is upper
*	Return: zero or one
*
*/
int _isupper(int c)
{
	if ((c < 90) && (c > 65))
	{
		printf("man isupper");
		return (1);
	}
	else
	{
		return (0);
	}
}
