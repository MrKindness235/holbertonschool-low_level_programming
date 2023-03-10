#include "main.h"

/**
 * _isupper - Checks for uppercase character
 *
 * Return: 1 for uppercase and 'c' for not
 * @c: an integer number
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
		else
	{
		return (0);
	}
}
