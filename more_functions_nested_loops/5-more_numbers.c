#include "main.h"

/**
 * more_numbers -Prints from '0' to '14' ten times
 *
 * Return: nothing
 */

void more_numbers(void)
{
int t = 0, i, j;
while (t < 10)
{
i = 0;
while (i <= 9)
{
_putchar (i);
i++;
if (i == 9)
{
	i = 1;
	for (j = 0; j <= 4; j++)
	{
		_putchar (j);
		i = 9;
	}
}
_putchar('\n');
t++;
}
}
}
