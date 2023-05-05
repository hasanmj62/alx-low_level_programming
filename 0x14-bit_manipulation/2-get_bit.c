#include "main.h"
#include <stdio.h>

/**
* get_bit - to get the value of a bit at the index were given.
* @n: the number for the evaluation
* @index: index starting from 0, from the bit we want to get
* Return: The Value of the bit at the index or -1 if there was an error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
