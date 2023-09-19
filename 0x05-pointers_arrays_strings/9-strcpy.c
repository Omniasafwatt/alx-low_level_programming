#include "main.h"

/**
 * *_strcpy - takes pointer
 *
 * @dest: int patameter
 * @src: char parameter
 *
 * Return: nothing
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do{
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
