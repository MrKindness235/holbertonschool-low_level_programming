#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums all the given parameters.
 *
 * Return: If n equals 0, returns 0. If not returns result of sum.
 *
 * @n: Parameters to be summed.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int sum = 0, num;

	if (n == 0)
	{
		return (0);
	}
	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(nums, int);
		sum += num;
	}
	va_end(nums);
	return (sum);
}
