#include <stdlib.h>
#include <"main.h"
/**
* *malloc_checked - locates memory using malloc
* @b: number of bytes to allocate
*
* Return : a pointer to the alllocated memory
*/
void *malloc_checked(unsigned int b)
{
  void *pointer
  pointer = malloc(b);
  if (pointer == NULL)
    exit(98);
  return (pointer);
}
