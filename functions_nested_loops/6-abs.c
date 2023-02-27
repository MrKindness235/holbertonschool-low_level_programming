#include "main.h"

/**
 * _abs - Returns n's absolute value.
 *
 * Return: If n is positive n, if zero 0, if negative -n.
 *
 * @n: a number.
 */

int _abs(int n)
{
	if (n > 0)
	{
		n = n;	
	}
	else if (n == 0)
	{
		n = 0;
	}
	else
	{
		n = -n;
	}
	return (n);
}
