#include<stdio.h>
/**
*	_islower(int c) - check for lowercase
*	Description: function to check lowercase
*	Return: always 0
*
*/
int _islower(int c)
{
	if((97 < c) && (c < 122) )
	{
		return (1);	
	}
	else
	{
		return (0);
	}
}
