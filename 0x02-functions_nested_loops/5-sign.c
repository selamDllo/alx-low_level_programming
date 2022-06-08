#include<stdio.h>
/**
*	print_sign - check the sign
*	@n: check it
*	Description: check the code sign
*	Return: return 0 or 1 or -1
*
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
