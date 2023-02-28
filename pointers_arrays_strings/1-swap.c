#include "main.h"
/**
 * reset_to_98 - Changes *a value to *b, and viceversa.
 *
 * Return: null.
 *
 * @a: a pointer.
 * @b: another pointer.
 */

void swap_int(int *a, int *b)
{
	int a';
	int b';
	
	a' = *a;
	b' = *b;

	*a = b';
	*b = a';
}
