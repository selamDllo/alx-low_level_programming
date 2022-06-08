#include<stdio.h>
/**
*	print_alphabet - print alphabet letter
*	Description: print to rint letter of alphabet
*	Return: always 0
*/
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
