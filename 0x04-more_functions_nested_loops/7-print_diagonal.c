#include "main.h"

/**
 * print_diagonal - print 0 - 9
 *
 * @n: input charachter
*/

void print_diagonal(int n)
{
	int num, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num = 1; num <= n; num++)
		{
			for (space = 1; space <= num; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
