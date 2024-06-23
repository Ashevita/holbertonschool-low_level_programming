#include <stdio.h>
#include "main.h"
/**
*print_alphabet_x10 - prints the alphabet 10 fois
*
* Description: Prints the alphabet from 'a' to 'z' followed by a newline.
*/

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		i++;
	}
}
