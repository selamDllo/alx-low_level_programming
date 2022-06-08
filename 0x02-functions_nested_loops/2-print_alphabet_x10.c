#include<stdio.h>
/**
*	print_alphabet - print alphabet
*	Description: print letter lowercase
*	Return: always 0
*
*
*/
void print_alphabet_10(void)
{
	int a;

	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = 97; a <= 122; a++)
		{
		putchar(a);
		}
	}
	putchar('\n');
}
