#include "main.h"

/**
 * _isdigit - Checks for a digit, which is defined as a decimal between 0 and 9
 *
 * Return: 1 for uppercase and 'c' for not
 * @c: an integer number
 */

int _isdigit(int c)
{
	if (c >= 48  && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
