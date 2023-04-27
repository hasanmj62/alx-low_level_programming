#include <stdlib.h>
#include "lists.h"

/**
* list_len - returns all the number of elements in a linked list.
* @h: pointer to the list_h list
*
* Return: number of the elemnts in h
*/
size_t list_len(const list_t *h)
{
size_t n = 0;
while (h)
{
n++;
h = h->next;
}
return (n);
}
