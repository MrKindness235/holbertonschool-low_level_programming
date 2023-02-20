#include <stdio.h>

/**
 * main- Alphabet in lowercase is displayed
 *
 * Return: zero
 */

int main(void)
{
char ch = '0';
for (ch = 'z'; ch >= 'a'; ch--)
putchar (ch);
putchar ('\n');
return (0);
}
