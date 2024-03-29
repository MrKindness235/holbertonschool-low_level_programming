#include <string.h>
#include <stdio.h>
#include <stdarg.h>
/**
 *  * print_all - initializes prototype
 *   * @format: types of args passed
 *    * @...: args passed
 * Description: prints everything passed to the function and uses separator
 */
void print_all(const char * const format, ...)
{
	va_list any;
	char *s;
	const char *p, *chars = "icsf";
	int separator = 0;

	if (format == NULL)
	{
		putchar('\n');
		return;
	}
	va_start(any, format);
	p = format;
	while (*p)
	{
		if (strchr(chars, *p))
		{
			switch (*p)
			{
				case 'i':
					printf("%d", va_arg(any, int));
					separator = 1;
					break;
				case 'c':
					printf("%c", va_arg(any, int));
					separator = 1;
					break;
				case 's':
					s = va_arg(any, char *);
					printf("%s", (s != NULL ? s : "(nil)"));
					separator = 1;
					break;
				case 'f':
					printf("%f", va_arg(any, double));
					separator = 1;
					break;
				default:
					continue;
			}
			(separator == 1 && *(p + 1) != '\0') ? printf(", ") : 0;
			separator = 0;
		}
		p++;
	}
	va_end(any);
	putchar('\n');
}
