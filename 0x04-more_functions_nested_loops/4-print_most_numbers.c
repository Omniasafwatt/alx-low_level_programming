#include "main.h"

/**
 * print_most_numbers - print 0 - 9
 *
 * Return: always 0 (success)
*/

void print_most_numbers(void)
{
	int num = 0;

	while (num >= 0 && num <= 9)
	{
		if (num == 2 || num == 4)
		{
			num++;
		}
		else
		{
			_putchar(num + 48);
			num++;
		}
	}
	_putchar('\n');
}
