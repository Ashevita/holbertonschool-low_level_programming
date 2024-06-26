#include <stdio.h>
#include "main.h"
/**
 * _strlen - ecrit
 * @s: variable
 *
 * Return: a
 */

int _strlen(char *s)
{
	int a = 0;

	for (a = 0; *s != '\0'; s++)
	{
		a++;
	}
	return (a);
}
