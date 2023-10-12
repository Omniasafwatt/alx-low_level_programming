#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum
 * @n: first value
 *
 * * Return: always int
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int sum = 0;
	int i = n;

	if (n == 0)
		return (0);

	va_start(arg, n);
	for (int i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
