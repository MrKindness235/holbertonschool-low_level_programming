#include "main.h"

/**
 */

char *_strcat(char *dest, char *src)
{
	int c;
	int i = 0;

	for (c = 0; dest[c] != '\0'; c++)
	{
		continue;
	}
	while (src[i])
	{
		dest[c] = src[i];
		i++;
		c++;
	}
	return (dest);
}
