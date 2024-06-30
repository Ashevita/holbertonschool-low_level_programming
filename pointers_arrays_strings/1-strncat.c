#include <stdio.h>
#include "main.h"
/**
 * _strncat - function
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;
	char *src_pointer = src;
	int i = 0;

	while (*original_dest != '\0')
	{
		original_dest++;
	}
	while (i < n && *src_pointer != '\0')
	{
	*original_dest = *src_pointer;
	original_dest++;
	src_pointer++;
	i++;
	}
	*original_dest = '\0';

	return (dest);
}

