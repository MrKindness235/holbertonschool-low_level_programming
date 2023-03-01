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

	while (str[p])
	{
		_putchar (str[p]);
		_putchar ('\n');
		p += 2;
	}
}
