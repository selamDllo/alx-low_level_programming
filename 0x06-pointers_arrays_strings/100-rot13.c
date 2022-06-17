#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*	leet - copies a string
*	@a: array
*	Description: copies a string
*	Return: the char pointer
*/
char *rot13(char *a)
{
	char *res;
	char tmp[123];
	int j, z, m;

	for (j =0; j < 123; j++)
		tmp[j] = 0;

	tmp['A'] = 'N';
	tmp['B'] = 'O';
	tmp['C'] = 'P';
	tmp['D'] = 'Q';
	tmp['E'] = 'R';
	tmp['F'] = 'S';
	tmp['G'] = 'T';
	tmp['H'] = 'U';
	tmp['I'] = 'V';
	tmp['J'] = 'W';
	tmp['K'] = 'X';
	tmp['L'] = 'Y';
	tmp['M'] = 'Z';
	tmp['N'] = 'A';
	tmp['O'] = 'B';
	tmp['P'] = 'C';
	tmp['Q'] = 'D';
	tmp['R'] = 'E';
	tmp['S'] = 'F';
	tmp['T'] = 'G';
	tmp['U'] = 'H';
	tmp['V'] = 'I';
	tmp['W'] = 'J';
	tmp['X'] = 'K';
	tmp['Y'] = 'L';
	tmp['Z'] = 'M';
	tmp['a'] = 'n';
	tmp['b'] = 'o';
	tmp['c'] = 'p';
	tmp['d'] = 'q';
	tmp['e'] = 'r';
	tmp['f'] = 's';
	tmp['g'] = 't';
	tmp['h'] = 'u';
	tmp['i'] = 'v';
	tmp['j'] = 'w';
	tmp['k'] = 'x';
	tmp['l'] = 'y';
	tmp['m'] = 'z';
	tmp['n'] = 'a';
	tmp['o'] = 'b';
	tmp['p'] = 'c';
	tmp['q'] = 'd';
	tmp['r'] = 'e';
	tmp['s'] = 'f';
	tmp['t'] = 'g';
	tmp['u'] = 'h';
	tmp['v'] = 'i';
	tmp['w'] = 'j';
	tmp['x'] = 'k';
	tmp['y'] = 'l';
	tmp['z'] = 'm';


	res = a;
	while (*a != '\0')
	{
		m = *a;
		z = tmp[m];
		if (z != 0)
		{
			*a = z;
		}
		a++;
	}

	return (res);
}
