#include<stdio.h>
/**
*	reset_to_98 - updates the pointer
*	@n: the content
*	Description: to discribe pointer
*	Return: always 0
*/
void reset_to_98(int *n)
{
	int k = 98;

	n = &k;

	printf("%d", *n);
}
