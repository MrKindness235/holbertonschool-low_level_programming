#include "main.h"


/**
 * print_sign - Checks 'n''s sign.
 *
 *
 * Return: If 'n' positive +, if zero 0, if negative -.
 * @n: a character
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar ('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar ('0');
	}
	else
	{
		return (-1);
		_putchar ('-');
	}
}
