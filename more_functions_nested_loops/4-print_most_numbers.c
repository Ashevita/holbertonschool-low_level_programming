#include <stdio.h>
#include "main.h"
/**
*print_most_numbers - prints most number
*
* Description: Prints number but no 2 and 4
*/
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
{
	if (c != '2' && c != '4')
	{
		_putchar(c);
	}
}
_putchar('\n');
}
