#include "main.h"


/**
 * print_sign - Checks n's sign.
 *
 * Return: If n is positive +, if zero 0, if negative -.
 *
 * @n: a character
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
