#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
*/

void print_alphabet_x10(void)
{
	for (int i = 0; i <= 9; i++)
	{
		int ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
