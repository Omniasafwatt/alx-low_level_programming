#include "main.h"

/**
 * more_numbers - print 0 - 14 10 times
 *
 * Return: always 0 (success)
*/

void more_numbers(void)
{
	int num = 0;
	int i;

	for (i = 0; i < 10; i++)
	{
		if (num >= 0 && num <= 9)
		{
			_putchar(num + 48);
			num++;
		}
		else (num > 9 && num <= 14)
		{
			_putchar(1 + 48);
			num = num % 10;
			num++;
		}
	}
	_putchar('\n');
}
