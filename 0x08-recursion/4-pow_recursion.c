#include "main.h"

/**
 * _pow_recursion - return the value of x raised to the power of y
 * @x: given number
 * @y: indices
 * Return: exponent if y >= 0.. -1 otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x ** y);
}

