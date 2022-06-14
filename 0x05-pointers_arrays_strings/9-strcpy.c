#include<stdio.h>
/**
*	*_strcpy - print every character
*	@dest: string
*	@src: integer
*	Description: to print character
*	Return: always 0
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (*(src + i) != '\0')
	{

		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
}
