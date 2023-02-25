#include "main.h"
/**
 * _isalpha - Checks if 'c' is an alphabetic char
 *
 * Return: 1 for 'c' as an alphabetic char and 0 otherwise
 *
 * @c: a character
 */


int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
