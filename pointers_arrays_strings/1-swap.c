#include "main.h"
/**
 * swap_int - Changes *a value to *b, and viceversa.
 *
 * Return: null.
 *
 * @a: a pointer.
 * @b: another pointer.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;
	*b = c;
}
