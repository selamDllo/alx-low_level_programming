#include<stdio.h>
/*
*	main - print the number 
*	Discription: print number is positive negative 
*	Return: always 0
*/
int main(void)
{
	int n=0;

	if (n > 0)
	{
		printf("is positive");
	}
	else if (n < 0)
	{
		printf("is negative");
	}
	if (n == 0)
	{
		printf("is zero");
	}
	return(0);
}
