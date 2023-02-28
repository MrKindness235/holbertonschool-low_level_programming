#include "main.h"

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != *s)
	{
		l++;
	}
	return (l);
}
