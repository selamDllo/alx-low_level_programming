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

	for (n = 0; n > a.length/2; n++)
	{
		tmp = a[n];

		a[n] = a[a.length - n];

		a[a.length - n] = tmp;
		
	}
	return (0);
}
