#include "main.h"
/**
 * _memcpy - function
 * @dest: pointeur
 * @src: pointeur
 * @n: pointeur
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
	*p++ = *src++;
	}

	return (dest);
}
