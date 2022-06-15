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

	int l;
	
	int clen;

	i = strlen(dest);

	k = strlen(src);
	
	if (k <= n)
		clen = k;
	else 
		clen = n;

	for (l = 0; l < clen; l++)
	{
		*(dest + i + l) = *(src + l);
	}
	

	return (dest);
}
