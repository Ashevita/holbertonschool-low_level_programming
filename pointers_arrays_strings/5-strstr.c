#include "main.h"
/**
 * _strstr - function
 * @haystack: variable
 * @needle: variable
 * Return: NULL
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
}

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

	while (*h != '\0' && *n != '\0' && *h == *n)
	{
		h++;
		n++;
	}

	if (*n == '\0')
	{
		return (haystack);
	}

		haystack++;
}
	return ('\0');
}
