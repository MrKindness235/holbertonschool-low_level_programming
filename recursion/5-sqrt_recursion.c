#include "main.h"

/**
 *  _auxiliar - Extension of main function.
 *
 *  Return: n's root
 *
 *  @n: Number to be used for calculations
 *
 *  @p: number to be used for calculations
 */

int _auxiliar(int n, int p)
{
	if (p * p == n)
	{
		return (p);
	}
	if (p * p > n)
	{
		return (-1);
	}
		return (_auxiliar(n, p + 1));
}

/**
 * _sqrt_recursion - Main; Calculates natural square root of n.
 *
 * Return: n's root.
 *
 * @n: Number to be used for calculations
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_auxiliar(n, 2));
}
