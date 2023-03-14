#include "main.h"

/**
 * *_strdup - Return a pointer to a new string which is
 *
 * Return: pointer.
 *
 * @str: given string.
 */

char *_strdup(char *str)
{
	char *p;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	if (!str)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		continue;
	}
	p = malloc(sizeof(char) * i);
	for (i = 0; p[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
