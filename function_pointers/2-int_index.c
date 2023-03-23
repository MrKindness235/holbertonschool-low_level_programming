#include "function_pointers.h"

/**
 * int_index - This handy function searches for an interger.
 *
 * Return: Returns the found interger.
 *
 * @array: Given array to search within.
 * @size: Size of given array.
 * @cmp: Pointer to function.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int c = 0;

	if (array == NULL)
	{
		return (0);
	}
	if (size == 0)
	{
		return (0);
	}
	if (size < 0)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (0);
	}
	for (c = 0; c < size; c++)
	{
		if (cmp(array[c]) != 0)
		{
			break;
		}
	}
	if (c == size)
	{
		return (-1);
	}
	else
	return (c);
}
