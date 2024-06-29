#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copy the line
 * @dest: variable
 * @src: variable
 * Return: original_dest
 */

char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest
	{
		while (*src != '\0')

			*dest = *src

			dest++;
			src++;
	}
	*dest = '\0';
	return (original_dest);

}
