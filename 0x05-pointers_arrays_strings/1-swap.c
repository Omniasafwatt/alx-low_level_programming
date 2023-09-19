#include "main.h"

/**
 * reset_to_98 - takes pointer
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

