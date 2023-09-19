#include "main.h"

/**
 * swap_int - takes pointer then swap them
 *
 * @a: int patameter 1
 * @b: int parameter 2
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

