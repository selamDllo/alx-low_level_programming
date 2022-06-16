#include<stdio.h>
#include<string.h>
/**
*	_strcmp - copies a string
*	@a: array
*	@n: number
*	Description: copies a string
*	Return: always 0
*/
void reverse_array(int *a, int n)
{

	int tmp;

	a.length = l;

	for (n = 0; n > l/2; n++)
	{
		tmp = a[n];

		a[n] = a[l - n];

		a[l - n] = tmp;
		
	}
	return (0);
}
