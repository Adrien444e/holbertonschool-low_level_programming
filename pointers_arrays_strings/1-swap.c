#include "main.h"

/**
 * swap_int - Entry point
 * @a: variable a
 * @b: variable b
 *
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
