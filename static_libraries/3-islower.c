#include "main.h"

/**
 *  _islower - Checks if 'c' is lowercase
 *
 *
 * Return: 1 for 'c' as lowercase and 0 otherwise
 * @c: a character
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
