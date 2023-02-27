#include "main.h"

/**
 * print_last_digit - Checks n's last digit.
 *
 * Return: n's last digit
 *
 * @n: a number
 */


int print_last_digit(int n)
{
	i = n % 10

	if (i < 0)
	{
		_putchar (-i + '0');
		return (-i);
	}
	else
	{
		_putchar (i + '0');
		return (i);
	}
}
