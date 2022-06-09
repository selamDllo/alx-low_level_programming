#include<stdio.h>
/**
*	more_numbers - print number
*	Description: print number from 0 to 14
*	Return: 0 always
*/
void more_numbers(void)
{
	int i;

	int k;

	for (i = 0; i < 11; i++)
	{
		for (k = 0; k <= 14; k++)
		{
			putchar(k);
		}
	}
	putchar('\n');
}
	
