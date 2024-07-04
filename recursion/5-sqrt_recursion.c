#include "main.h"
/**
 * _sqrt_recursion_helper - function
 * @n: variable
 * @x: variable
 * Return: int
 */

int _sqrt_recursion_helper(int n, int x)
{
	if (x * x == n)
	{
	return (x);
	}
	else if (x * x > n)
	{
	return (-1);
	}
	else
	{
	return (_sqrt_recursion_helper(n, x + 1));
	}
}

/**
 * _sqrt_recursion - function
 * @n: variable
 * Return: char
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	return (_sqrt_recursion_helper(n, 0));
}
