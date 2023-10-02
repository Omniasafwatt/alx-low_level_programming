#include "main.h"

/**
 * _islower - function chech lowercase
 *
 * @c: checks input of function
 *
 * Return: return 1 if 'c' is lower
 *          otherwise always 0 9success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
