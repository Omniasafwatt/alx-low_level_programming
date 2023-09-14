#include "main.h"

/**
 * _isdigit - function print upper character
 *
 * @c: input charachter
 *
 * Return: 1 if its digit, 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
