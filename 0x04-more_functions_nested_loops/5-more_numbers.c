#include "main.h"

/**
 * more_numbers - print 0 - 14 10 times
 *
 * Return: always 0 (success)
*/

void more_numbers(void)
{
	int j;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar (j % 10 + '0');
		}
		_putchar('\n');
	}
}
