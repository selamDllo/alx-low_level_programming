#include<stdio.h>
/**
*	print_numbers - print number
*	Description: print number from o to 9
*	Return: always 0
*/
void print_numbers(void)
{
	int i=0;
	while(i < 9)
	{
		putchar(i);
	}
	putchar('\n');
}
