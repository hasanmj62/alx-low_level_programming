#include "main.h"
#include <stdio.>


/**
* clear_bit - to set the values of a bit to "0" at the index were given to
* @n: the pointer to decimal number to make the changes
* @index: index to position to change.
* Return: 1 if SUCCESS, -1 IF ERROR.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int hold;

	if (index > 64)
		return (-1);
	hold = index;
	for (i = 1; hold > 0; i *= 2, hold--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
