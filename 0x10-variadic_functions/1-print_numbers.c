#include "main.h"
/**
 * print_numbers - function that print numbers
 * @n: first value
 * @separator: second value
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pt;
	int i = n;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(pt, n);
	while (i--)
		printf("%d%s", va_arg(pt, int),
				i ? (separator ? separator : "") : "\n");
	va_end(pt);
}
