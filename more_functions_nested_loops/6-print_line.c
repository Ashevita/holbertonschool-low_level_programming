#include <stdio.h>
#include "main.h"
/**
 * print_line - print one line
 *
 * @n: underscor
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
		_putchar('_');
		}
	_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
