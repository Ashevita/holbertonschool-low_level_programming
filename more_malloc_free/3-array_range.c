#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function
 * @min: variable
 * @max: variable
 * Return: char
 */

int *array_range(int min, int max)
{
	int *array;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	array = malloc(size * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
