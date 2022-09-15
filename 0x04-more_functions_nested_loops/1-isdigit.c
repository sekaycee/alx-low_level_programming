#include "main.h"

/**
 * _isdigit - check for digit 0 to 9
 * @d: integer digit argument
 * Return: 1 if is digit.. 0 otherwise
 */
int _isdigit(int d)
{
	if (d > 47 && d < 58)
		return (1);
	else
		return (0);
}

