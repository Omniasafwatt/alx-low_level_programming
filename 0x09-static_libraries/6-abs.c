#include "main.h"

/**
 * _abs - print + if n is greater than zero,
 * 0 if n is zero and - if n is less than zero.
 *
 * @n: takes integer type input for function.
 *
 * Return: 1 if +, 0 if 0 and -1 if -
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
