#include <stdio.h>
#include "main.h"
/**
 * _strcmp - function
 * @s1: variable
 * @s2: variable
 * Return: char
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
