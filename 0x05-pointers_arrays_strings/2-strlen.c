#include "main.h"

/**
 * _strlen - takes pointer
 *
 * @s: char patameter
 *
 * Return: nothing
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
