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
	int q = 0;
	char r;

	while (s[p])
	{
		p++;
	}
	while (q < p--)
	{
		r = s[q];
		s[q++] = s[p];
		s[p] = r;
	}
}
