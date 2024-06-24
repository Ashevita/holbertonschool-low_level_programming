#include <stdio.h>
#include "main.h"
/**
*more_numbers - prints the alphabet 10 fois
*
* Description: Prints the alphabet from 'a' to 'z' followed by a newline.
*/

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
	{
			if (i >= 10)

	{
			_putchar('1');
	}
		_putchar((j % 10) + '0');
	}
	_putchar('\n');
}
}

