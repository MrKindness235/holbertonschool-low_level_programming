#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - Prints half of a string
 *
 * Return: null
 *
 * @str: Given string of chars
 */

void puts_half(char *str)
{
	int p = 0;
	int len = 0;
	int n = 0;

	len = _strlen(str);
	n = len / 2;
	if (len / 2 == 0)
	{
		n = len / 2;
		p = n;
		while (str[p] != '\0')
		{
			_putchar (str[p]);
		}
		_putchar ('\n');
	}
	else
	{
		n = (len -= 1) / 2;
		_putchar (n);
	}
}
