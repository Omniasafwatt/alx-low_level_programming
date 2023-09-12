#include "main.h"

/**
 * _islower - function chech lowercase
 *
 * @c: checks input of function
 *
 * Return: return 1 if 'c' is lower
 *          otherwise always 0 9success)
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
