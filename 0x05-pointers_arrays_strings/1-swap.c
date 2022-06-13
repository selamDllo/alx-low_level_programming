#include<stdio.h>
/**
*	swap_int - swap two integer
*	@a: the first value
*	@b: the second value
*	Description: swapthe two number
*	REturn: always 0
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
