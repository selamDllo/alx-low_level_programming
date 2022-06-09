#include<stdio.h>
/*
*	positive_or_negative - print the number
*	@n: print n
*	Discription: print number is positive negative
*	Return: always 0
*/
int positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("is positive");
	}
	else if (n < 0)
	{
		printf("is negative");
	}
	else
	{
		printf("is zero");
	}
	return(0);
}
