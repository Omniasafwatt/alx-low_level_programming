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
		_putchar('\n');
	else
	{
		for (num = 1; num <= n; num++)
		{
			for (space = 1; space <= n; space++)
			{
				if (space == num)
					_putchar('\\');
				else if (space < num)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
