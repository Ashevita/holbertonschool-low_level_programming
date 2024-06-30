#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatere deux chaine
 * @dest: variable
 * @src: variable
 * Return: return char
 */

char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;
	char *src_pointer = src;

	while (*original_dest != '\0')
	{
		original_dest++;
	}
	while (*src_pointer != '\0')
	{
	*original_dest = *src_pointer;
	original_dest++;
	src_pointer++;
	}
	*original_dest = '\0';

	return (original_dest);
}
