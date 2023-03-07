#include "main.h"

/**
 * _strlen_recursion - Returns length of given string.
 *
 * Return: String length.
 *
 * @s: A string.
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a = (_strlen_recursion(s + 1));
		return (a += 1);
	}
	return (0);
}
