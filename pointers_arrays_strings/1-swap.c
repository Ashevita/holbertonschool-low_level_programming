#include <stdio.h>
#include "main.h"
/**
 * swap_int - swap les int
 *
 * @a: variable
 * @b: variable
 */

void swap_int(int *a, int *b)
{
	int ptr;

	ptr = *a;
	*a = *b;
	*b = ptr;
}
