#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
*/

void print_alphabet_x10(void)
{
	int i;
	int ch = 'a';

	for (i = 0; i <= 9; i++)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
