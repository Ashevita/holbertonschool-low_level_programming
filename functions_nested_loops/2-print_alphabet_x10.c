#include <stdio.h>
#include "main.h"
/**
*print_alphabet - prints the alphabet
*
* Description: Prints the alphabet from 'a' to 'z' followed by a newline.
*/

void print_alphabet_x10(void)
{
int i;
int j;
for (j = 0; j < 10; ++j)
{
for (i = 97; i <= 122; ++i)	
{
_putchar(i);
}
_putchar('\n');
j++;
}


}
