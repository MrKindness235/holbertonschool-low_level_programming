#include <stdio.h>

/**
 *  main- Alphabet in lowercase and upercase is displayed
 *
 *  Return: zero
 */

int main(void)
{
char ch = '0';

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar (ch);
}

for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar (ch);
}

putchar ('\n');

return (0);
}
