#include<stdio.h>
/**
*	rev_string - reverse a string
*	@s: string
*	Description: function of reverse string
*	Return: always 0
*/
void rev_string(char *s)
{
	int i;

	int k;

	char temp;

	int last;

	char *s_last;


	i = 0;

	k = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	last = i - 1;
	/* printf("last = %d\n", last);*/
	s_last = s + last;

	for (k = 0; k < (i / 2); k++)
	{
		temp = *(s_last - k);
		*(s_last - k) = *(s + k);
		*(s + k) = temp;
		/*printf("k=%d and temp=%c", k, temp);*/
	}
}
