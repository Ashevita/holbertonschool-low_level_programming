#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function
 * @name: variable
 * @f: pointers
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
