#include "main.h"

/**
 *  * _puts_recursion - Prints given string using recursion
 *   *
 *    *  Return: null
 *     *
 *      *  @s: Given string
 *       */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar ('\n');
		return;
	}
	_puts_recursion(s + 1);
	_putchar (*s);
}
