#include<stdio.h>
#include<main.h>
/*
*	main - print the number
*	@n: print n
*	Discription: print number is positive negative
*	Return: always 0
*/
int main(int n)
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
