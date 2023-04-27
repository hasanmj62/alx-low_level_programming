#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - adding a new node at the begging of the linked List
* @head: two pointer to the list_t list
* @str: new string to be added in the node.
*
* Return: the Adress of the new Element, or NULL if FAIL HAPPEN.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int len = 0;
while (str[len])
len++;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
new->len = len;
new->next = (*head);
(*head) = new;
return (*head);
}
