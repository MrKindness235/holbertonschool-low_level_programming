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
	unsigned int i = 0;
	int tof = 0;
	int polo = 1;

	while (s[c] != '\0')
	{
		if (s[c] == 45)
		{
			polo = -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			i = (i * 10) + (s[c] - '0');
			c++;
			tof = 1;
		}
			if (tof == 1)
			{
				break;
			}
		c++;
	}
		return (i * polo);
}
