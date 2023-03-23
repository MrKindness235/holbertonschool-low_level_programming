#include "function_pointers.h"

/**
 * array_iterator - Executes given function
 *                  iterating trought the array.
 *
 * Return: Void.
 *
 * @size: Size of the array.
 * @array: Given array to be iterated.
 * @action: Pointer to function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c = 0;

	if (size == 0)
	{
		return;
	}
	if (array == NULL)
	{
		return;
	}
	for (c = 0; c < size; c++)
	{
		action(array[c]);
	}
}
