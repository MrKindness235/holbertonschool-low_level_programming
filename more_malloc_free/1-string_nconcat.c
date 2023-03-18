#include "main.h"

/**
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

	return (p);
}
