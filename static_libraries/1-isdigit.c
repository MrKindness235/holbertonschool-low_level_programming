#include "main.h"

/**
 * _isdigit - Checks for a digit, which is defined as a decimal between 0 and 9
 *
 * Return: 1 for digit found and 'c' for no digit found
 *
 * @c: an integer number
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
		else
	{
		return (0);
	}
}
