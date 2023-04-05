#include "main.h"

/**
 * _pow_recursion - return the value of x up to the power of y
 * @x: Value to up
 * @y: power
 *
 * Return: result of the power
 */
int _pow_recursion_(int x , int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
