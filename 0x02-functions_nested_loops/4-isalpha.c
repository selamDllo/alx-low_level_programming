#include<stdio.h>
/**
*	_isalpha - check the code
*	@c: is letter
*	Description: check the letter
*
*	Return: return 0 or 1
*/
int _isalpha(int c)
{
	if (((c < 122) && (c > 97)) || ((c < 90) && (c > 65)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
