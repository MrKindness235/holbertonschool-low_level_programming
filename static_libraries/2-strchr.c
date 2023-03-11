#include "main.h"
/**
 * _strchr - Check the code.
 *   * Description: 'Locates a character in a string.'
 *    * @s: is a string.
 *     * @c: is a character.
 * Return: A pointer tothe first occurrence of the character c in the string s,
 *       * or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	else
	{
		return ('\0');
	}
}
