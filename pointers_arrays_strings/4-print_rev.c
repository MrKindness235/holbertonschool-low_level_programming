#include "main.h"

/**
 * _puts - Prints given string in reverse
 *
 * Return: null
 *
 * @str: Given string of chars
 */

void  _puts(char *str)
{
	int p = 0;

	while (str[p] != '\0')
	{
		p++;
	}
	while (str[p] > 0)
	{
		_putchar (p);
		p--;
	}
		_putchar ('\n');
}
