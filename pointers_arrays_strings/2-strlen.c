#include "main.h"

/**
 * _strlen - Returns given string lenght
 *
 * Return: Given string lenght
 *
 * @s: pointer
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
