#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function
 * @array: pointers
 * @size: variable
 * @cmp: pointers function
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)

		cmp(array[i]);

	if (cmp(array[i]) != 0)
	{
		return (i);
	}
		return (-1);
}
