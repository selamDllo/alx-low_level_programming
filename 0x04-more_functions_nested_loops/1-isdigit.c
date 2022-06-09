#include<stdio.h>
/**
*	_isdigit - to check the digit
*	@c: is digit
*	Description: check and print the digit
*	Return: zero or one
*/
int _isdigit(int c)
{
	if ((c > 0) && (c < 9))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
