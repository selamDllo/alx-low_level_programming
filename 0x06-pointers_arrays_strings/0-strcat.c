#include<stdio.h>
#include<string.h>
/**
*	*_strcat - concatenate two string
*	@dest: string
*	@src: string
*	Description: concatenate two string
*	Return:always 0
*/
char *_strcat(char *dest, char *src)
{
	int i;

	int k;

	int l;

	i = strlen(dest);
	k = strlen(src);
	
	for (l = 0; l < (i - 1); l++)
	{
		*(dest + (i - 1) + l) = *(src + l);
	}
	*(dest + (k + 1)) = *(src + k);
	return (dest);
}

