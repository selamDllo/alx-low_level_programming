#include<stdio.h>
/**
*	_islower - check for lowercase
*	@c: the input character 
*	Description: function to check lowercase
*	Return: always 0
*
*/
int _islower(int c)
{
	if ((c > 97) && (c < 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
