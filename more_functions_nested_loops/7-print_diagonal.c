#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - print one line
 *
 * @n: underscor
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');

		}
	}
