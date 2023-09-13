#include "main.h"

/**
 * print_last_digit - function print
 *
 * @n: takes integer type input for function.
 *
 * Return: always 0 (success)
*/

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10:

	_putchar(lastDigit + '0'):
	return (lastDigit):
}
