#include <stdio.h>
#include "lists.h"

/**
* print_list - printing all the elements of the LINKED LIST.
* @h: pointer to the list_h listing to print
*
* Return: number of the nodes are printed.
*/

size_t print_list(const list_h *h)
{
size_t s = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
s++;
}
return (s);
}
