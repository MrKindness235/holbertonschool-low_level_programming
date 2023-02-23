#include <unistd.h>

/**
 * main- Displays _putchar
 *
 * Return: zero
 */

int _putchar(char c)
{
		return (write(1, &c, 1));
}
