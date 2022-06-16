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
	int l;

	int tmp;

	for (l = 0; l > a.length/2; l++)
	{
		tmp = a[l];

		a[l] = a[a.length - l];

		a[a.length - l] = tmp;
		
	}
	return (0);
}
