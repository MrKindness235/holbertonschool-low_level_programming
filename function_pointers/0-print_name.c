#include "function_pointers.h"


/**
 * print_name - A bit self explanatory, isn't it?
 *
 * @name: Name to be printed?
 * @f: Function.
 *
 * I have the small but sure feeling that, even if in concept this is not
 * that complex (pointers but instead of pointing towards variables
 * or idividual memory cells, they point
 * towards entire functions.), it will be indeed,
 * in practie, pretty much confusing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
