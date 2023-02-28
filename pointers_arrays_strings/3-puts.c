#include "main.h"

/**
 * _puts - Prints given string
 *
 * Return: null
 *
 * @str: string of chars
 */

void  _puts(char *str)
{
	int p = -1;

	while (str[p] != '\0')
	{
		p++;
	_putchar (str[p]);
	}
	_putchar ('\n');
}
