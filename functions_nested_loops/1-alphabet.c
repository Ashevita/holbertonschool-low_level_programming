#include <stdio.h>
#include "main.h"
/**
*print_alphabet - prints the alphabet
*
* Description: Prints the alphabet from 'a' to 'z' followed by a newline.
*/

void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
{
_putchar(c);
}
_putchar('\n');
}
