#include "main.h"
/**
 * _strpbrk - function
 * @s: pointeur
 * @accept: pointeur
 * Return: int
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
	for (a = accept; *a; a++)
	{
		if (*s == *a)
			return (s);
	}
			s++;
	}
	return ('\0');
}
