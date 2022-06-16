#include<stdio.h>
#include<string.h>
/**
*	reverse_array - copies a string
*	@a: array
*	@n: number
*	Description: copies a string
*/
void reverse_array(int *a, int n)
{

	int tmp, i;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];

		a[i] = a[n - 1 - i];

		a[n - 1 - i] = tmp;
	}
}
