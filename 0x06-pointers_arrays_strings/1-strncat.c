#include<stdio.h>
#include<string.h>
/**
*	_strncat - concatenate two string
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

	int addnull;

	addnull = 0;

	i = strlen(dest);

	k = strlen(src);
	
	if (k < n)
	{
		clen = k;
	}
	else
	{
		clen = n;
		addnull = 1;
	}


	for (l = 0; l < clen; l++)
	{
		*(dest + i + l) = *(src + l);
	}

	/** 
	 * if (addnull == 1)
	 *	*(dest + i + l) = '\0';
	 */
	return (dest);
}
