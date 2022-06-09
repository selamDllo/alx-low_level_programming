#include<stdio.h>
/**
*	print_square - print square
*	@size: print square with size
*	Descripton: print # in square
*	Return: always 0
*/
void print_square(int size)
{
	int i;
	
	for (i=0; i <= size; i++)
	{
		for (i = 0; i <= size; i++)
		{
			if (size != 0)
			{
				putchar('#');
				putchar('\t');
			}
			else
			{
				putchar('\n');
			}
		}
	}
}
