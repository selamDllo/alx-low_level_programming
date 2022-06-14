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
	char temp;
	temp = *dest;
	*dest = *src;
	*src = temp;
	return (dest);
}
