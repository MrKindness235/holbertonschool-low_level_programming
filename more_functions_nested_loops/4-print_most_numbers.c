#include "main.h"

/**
 * print_most_numbers -Prints most digits, 0 to 9, using _putchar Skips 2 and 4
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
int i;
	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
	{
		i++;
	}
		else
		{
		_putchar (i);
		}
	}
_putchar('\n');
}
