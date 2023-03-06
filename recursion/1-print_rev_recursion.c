#include "main.h"

/**
 * _print_rev_recursion - Prints given string using recursion in reverse
 *
 *  Return: null
 *
 *  @s: Given string
 */

void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar (*s);
}
