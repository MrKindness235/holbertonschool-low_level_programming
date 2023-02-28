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
	int p;

	for (p = 0; str[p]; p++)
	{
	_putchar (str[p]);
	}
	_putchar ('\n');
}
