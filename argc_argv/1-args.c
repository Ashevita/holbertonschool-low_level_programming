#include <stdio.h>
/**
 * main - entry
 * @argc: variable
 * @argv: variable
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc);
	for (i = 1; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
