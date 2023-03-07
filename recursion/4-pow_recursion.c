#include "main.h"

/**
 * _pow_recursion - Does power y of x.
 *
 *  Return: Varies, read code if you will.
 *
 *  @x: Given number.
 *  @y: Given exponent.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y < 1)
	{
		return (1);
	}
	y--;
	return (x * _pow_recursion(x, y));
}
