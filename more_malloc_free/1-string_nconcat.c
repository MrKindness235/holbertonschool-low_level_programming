#include "main.h"

/**
 * *string_nconcat - Concatenates n characters of given
 * 2 string into given 1 string.
 *
 * Return: Pointer to newly allocated memory
 * which holds newly concatenated string.
 *
 * @s1: Given string to be concatenated.
 * @s2: Given string to base concatenation.
 * @n: Number of characters of s2 to be concatenated.
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a;
	int b;
	char *p;

	if (n <= 0 || s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
	for (b = 0; s2[b] != '\0'; b++)
	if (n >= b)
	{
		p = malloc_checked(sizeof(char) * (a + b));
		for (a = 0; s1[a] != '\0'; a++)
		{
			p[a] = s1[a];
		}
		for (b = 0; s2[b] != '\0'; b++)
		{
			p[a] = s2[b];
			a++;
		}
	}
		p = malloc_checked(sizeof(char) * (a + n));
		for (a = 0; s1[a] != '\0'; a++)
		{
			p[a] = s1[a];
		}
		for (b = 0; b <= n; b++)
		{
		p[a] = s2[b];
		a++;
		}
	return (p);
}
