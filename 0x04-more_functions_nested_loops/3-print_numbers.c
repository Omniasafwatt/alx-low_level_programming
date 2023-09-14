#include "main.h"

/**
 * print_numbers - print 0 - 9
 *
 * Return: always 0 (success)
*/

void print_numbers(void)
{
	int num = 0;

	while (num >= 0 && num <= 9)
	{
		_putchar(num + 48);
		num++;
	}
	_putchar('\n');
}
