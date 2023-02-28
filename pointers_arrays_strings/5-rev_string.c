#include "main.h"

/**
 * rev_string - Prints given string in reverse
 *
 * Return: null
 *
 * @s: Given string of chars
 */

void rev_string(char *s)
{
	int p = 0;
	int p2 = 0;
	int a = 0;

	while (s[p] != '\0')
	{
		p++;
	}
	while (p > 0)
	{
		a = s[p];
		s[p2] = a;
		p--;
		p2++;
	}
}
