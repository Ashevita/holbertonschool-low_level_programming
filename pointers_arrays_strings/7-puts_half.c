#include <stdio.h>
#include "main.h"
/**
 * puts_half - imprime la moitié
 * @str: variable
 */

void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a >= 5)
	{
		_putchar(str[a]);
	}
	}
		_putchar('\n');
}
