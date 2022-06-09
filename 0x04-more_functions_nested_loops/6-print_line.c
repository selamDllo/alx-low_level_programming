#include<stdio.h>
/**
*	print_line - print stright line
*	Description: print stright line with number
*	Return: always 0
*/
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n != 0)
		{
			_putchar("_");
			_putchar('\t');
		}
	}
	_putchar('\n');
