#include <stdio.h>
#include "main.h"
/**
*_isupper - controls if a character is in lowercase
*@c: character to be verified
*Return: return 0 or 1
*/


int _isupper(int c)
{
	if (c >= 65 && c <= 90)
{
	return (1);
}
else
{
	return (0);
}
}
