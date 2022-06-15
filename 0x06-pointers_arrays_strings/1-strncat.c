#include<stdio.h>
#include<string.h>
/**
*	*_strncat - concatenate two string
*	@dest: string
*	@n: intger
*	@src: string
*	Description: concatenate two string
*	Return:always 0
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;

	int k;

	i = strlen(dest);

	k = strlen(src);

	if (n != '\0')
	{
		for (n = 0; n < k; n++)
		{
			*(dest + (i - 1) + n) = *(src + n);
		}
	}

	return (dest);
}

