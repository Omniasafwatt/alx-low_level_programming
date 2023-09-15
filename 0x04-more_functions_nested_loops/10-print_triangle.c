#include "main.h"

/**
 * print_triangle - printshape
 *
 * @size: input charachter
*/

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int row, column;

		for (row = 1; row <= size; row++)
		{
			for (column = row; column < size; column++)
			{
				_putchar(' ');
			}
			for (column = 1; column <= row; column++)
				_putchar('#');
			_putchar('\n);
		}
	}
}
