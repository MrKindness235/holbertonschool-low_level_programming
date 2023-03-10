#include "main.h"

/**
 * _atoi - Converts a string into interger.
 *
 * Return: Interger.
 *
 * @s: Pointer to a given string.
 */

int _atoi(char *s)
{
	int c = 0;
	int i = 0;
	int tof = 0;

	while (s[c] != '\0')
	{
		while (s[c] >= 48 && s[c] <= 57)
		{
			i = (i * 10) + (s[c] - '0');
			tof = 1;
		}
	if (s[c - 1] == 45)
		{
			i = i * -1;
		}
			c++;
	}
		return (i);
}
