#include <stdio.h>
/**
* main - Entry point
* 
* Description: 'the program's description'
* 
* Return: Always 0 (Success)
*/

int main(void)
{
char c;
char b;

for (c = 'A' ; c <= 'Z' ; c++) {
putchar(c);
}
for (b = 'a' ; b <= 'z' ; b++) {

putchar(b);
}

putchar('\n');

return (0);
}
