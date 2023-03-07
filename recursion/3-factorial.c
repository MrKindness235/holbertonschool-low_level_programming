#include "main.h"

/**
 * factorial - Returns factorial of given interger.
 *
 * Return: Factorial of given interger.
 *
 * @n: An interger.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
