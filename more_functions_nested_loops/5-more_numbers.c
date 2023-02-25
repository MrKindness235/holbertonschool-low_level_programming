#include "main.h"

/**
 * more_numbers -Prints from '0' to '14' ten times
 *
 * Return: nothing
 */

void more_numbers(void)
{
int t = 0, i;
while (t < 10)
{
i = 0;
while (i <= 14)
{
_putchar (i);
i++;
}
_putchar('\n');
t++;
}
}
