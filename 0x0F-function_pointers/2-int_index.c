#include "function_pointers.h"

/**
* int_index - SEARCHES FOR AN INTEGER.
* @ARRAY: array to search inside.
* @size:size of the ARRAY.
* @cmp: pointer to the comparing function
*
* Return: index of the first element for which of
* the cmp function does not return 0, or -1 if no match found.
* or size if NEGATIVE.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}
