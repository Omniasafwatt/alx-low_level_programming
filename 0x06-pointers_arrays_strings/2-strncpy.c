#include "main.h"

/**
 * _strncpy - function copy two strings
 *
 * @dest: first input
 * @src: second input
 * @n: third input
 *
 * Return: nothing
*/

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[c] = src[c];
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
