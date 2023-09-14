#include "main.h"

/**
 * _isupper - function print upper character
 *
 * @c: input charachter
 *
 * Return: 1 if its uppercase, 0 if not
*/

int _isupper(int c)
{
	char c;

	if (c >= 65 && c <= 90)
	{
		printf("%c:is upper\n", c);
		return (1);
	}
	else
		return (0);
}
