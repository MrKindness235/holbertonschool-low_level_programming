#include "main.h"

/**
 * print_rev - Prints given string in reverse
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
	p--;
	}
		_putchar (s[p]);
		_putchar ('\n');
}
