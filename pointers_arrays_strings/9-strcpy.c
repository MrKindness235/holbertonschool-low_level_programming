#include "main.h"
#include "2-strlen.c"

/**
 *  _strcpy - Writes src into dest.
 *
 *  Return: dest.
 *
 *  @src: given string.
 *
 *  @dest: destination of given string.
 */

char *_strcpy(char *dest, char *src)
{
	int c;

	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
		if (src[c] == '\0')
		{
			dest[c] = src[c];
			break;
		}

	}
	return (dest);
}
