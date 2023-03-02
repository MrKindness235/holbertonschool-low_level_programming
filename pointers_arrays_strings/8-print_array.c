#include "main.h"

/**
 * print_array - Prints given quantity of cells from given array.
 *
 * Return: Null.
 *
 * @a: Given array.
 *
 * @n: Given quantity of cells.
 */

void print_array(int *a, int n)
{
	int p = 0;

	if (p == 0)
	{
		printf("%d", *(a + p));
		p++;
	}
	while (p != n)
	{
		printf(", %d", *(a + p));
		p++;
	}
	putchar ('\n');
}
