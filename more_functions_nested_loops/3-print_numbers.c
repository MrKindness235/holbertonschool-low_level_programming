#include "main.h"

/**
 * print_numbers -Prints all digits, 0 to 9, using _putchar
 *
 * Return: nothing
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar (i);
	}
	_putchar('\n');
}
