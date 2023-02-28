#include "main.h"

/**
 * _puts - Prints given string in reverse
 *
 * Return: null
 *
 * @s: Given string of chars
 */

void print_rev(char *s)
{
	int p = 0;

	while (s[p] != '\0')
	{
		p++;
	}
	while (s[p] > 0)
	{	
	_putchar (s[p]);
	p--;
	}
		_putchar ('\n');
}
