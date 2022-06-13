#include<stdio.h>
/*
*	rev_string - reverse a string
*	@s: string
*	Description: function of reverse string
*	Return: always 0
*/
void rev_string(char *s)
{
	int i;

	int k;

	int temp;

	int last;

	i = 0;

	k = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	last = i - 1;
	for (k = 0; k >= i/2; k++)
	{
		temp = *((s + last) - k);
		*((s + last) - k) = *(s+k);
		*(s+k) = temp; 

	}
}
