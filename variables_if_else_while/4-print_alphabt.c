#include <stdio.h>

/**
 * main- Prints alphabt in lowrcas using putchar but omits e and q
 *
 * Return: zero
 */

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'e' || ch == 'q')
{
ch++;
}
putchar (ch);
}
putchar ('\n');
return (0);
}
