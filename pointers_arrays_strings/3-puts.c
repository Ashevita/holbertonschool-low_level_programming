#include <stdio.h>
#include "main.h"
/**
 * _puts - puts
 * @str: cariable
 */

void _puts(char *str)
{
	int a = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
	}

