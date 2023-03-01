#include "main.h"

/**
 * puts2 - Prints first character of string, and every two thereafter
 *
 * Return: null
 *
 * @str: Given string of chars
 */

void puts2(char *str)
{
	int p = 0;

	while (str[p] != '\0')
	{
		_putchar (str[p]);
		p += 2;
	}
	_putchar ('\n');
}
