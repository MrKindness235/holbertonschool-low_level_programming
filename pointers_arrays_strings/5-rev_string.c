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
	char a[1000];

	while (s[p] != '\0')
	{
		p++;
	}
	while (p > 0)
	{
	a[q] = s[p];
	q++;
	p--;
	}
	s = a;
}
