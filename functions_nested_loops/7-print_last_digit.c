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
	if (n < 0)
	{
	_putchar (-n % 10); 
	return (-n % 10);
	}
	else
	{
		_putchar (-n % 10);
		return (n % 10);
	}
}
