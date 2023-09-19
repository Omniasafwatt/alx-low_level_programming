#include "main.h"

/**
 * swap_int - takes pointer then swap them
 *
 * @n: int patameter
 * @b: int parameter
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

