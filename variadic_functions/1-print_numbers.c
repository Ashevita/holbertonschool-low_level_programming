#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int num;
	
	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
	printf("%d", num);

	if (separator != NULL && i < n -1)
	{
		printf("%s", separator);
	}
	}

	va_end(args);

	printf("\n");
}
