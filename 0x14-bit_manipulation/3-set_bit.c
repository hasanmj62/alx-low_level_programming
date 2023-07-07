#include "main.h"


/**
* set_bit - set the value of a bit to 1 at the given index.
* @n: decimal number that passed by the pointer
* @index: index position to make the changes , the starting point from 0.
* Return: 1 if SUCCESS , 0 if there was an ERROR
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}
