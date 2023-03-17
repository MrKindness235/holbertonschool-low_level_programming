#include "main.h"

/**
 * *str_concat - A handy function to concatenate two
 * different strings into a new direction, which is
 * pointed by a new pointer aswell, using given pointers.
 *
 * Return: Pointer to new string.
 *
 * @s1: "Receiving" string for concatenation.
 * @s2: "Sending" string of concatenation.
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	char *p;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	p = malloc(sizeof(char) * (a + b + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	a = 0;
	b = 0;
	while (s1[a] != '\0')
	{
		p[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		p[a] = s2[b];
		a++;
		b++;
	}
	return (p);
}
