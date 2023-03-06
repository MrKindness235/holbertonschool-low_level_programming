#include "main.h"

/**
 * _print_rev_recursion - Prints given string using recursion
 *
 *  Return: null
 *
 *  @s: Given string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar ('\n');
		return;
	}
	_puts_recursion(s + 1);
	_putchar (*s);
}
