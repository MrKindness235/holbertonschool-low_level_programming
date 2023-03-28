#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - Prints the numbers.
 *
 * Return: void.
 *
 * @separator: A separator.
 * @n: Quantity of arguments!
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	char *nsep;

	if (n == 0)
	{
		putchar('\n');
		return;
	}
	if (separator == NULL)
		nsep = "";
	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator == NULL && i < n - 1)
			printf("%s", nsep);
		else if (i < n - 1)
			printf("%s", separator);
	}
	va_end(nums);
	putchar('\n');
}
