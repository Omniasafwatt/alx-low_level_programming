#include "variadic_functions.h"
/**
 * print_strings - function that print numbers
 * @n: first value
 * @separator: second value
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pt;
	int i = n;
	char *str;

	if (n == 0)
	{
		printf("\n");
			return;
	}
	va_start(pt, n);
	while (i--)
		printf("%s%s", (str = va_arg(pt, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(pt);
}
