#include "main.h"

/**
 * _strlen_recursion - function that prints a string in reverse
 *@s: first value
 *
 * Return: Return solution
 */
int _strlen_recursion(char *s)
{
	int ntr = 0;

	if (*s > '\0')
		ntr += _strlen_recursion(s + 1) + 1;

	return (ntr);
}
