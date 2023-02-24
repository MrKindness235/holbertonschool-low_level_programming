#include "main.h"

/**
 *  print_alphabet_x10 - prints alphaber 10 times
 *
 *  Return: zero
 */

void print_alphabet_x10(void)
{
	int t = 0, i;
while (t < 10)
{
	i = 97;
	while (i <= 122)
	{
		_putchar (i);
		i++;
	}
		_putchar('\n');
t++;
}
}
