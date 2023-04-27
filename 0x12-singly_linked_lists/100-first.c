#include <stdio.h>

void first(void) __attribute__ ((constructor));


/**
* first - prints a sentence before the main F.
* function is excuted
*/

void first(void)
{
printf("You're bead! and yet, you must allow, \n");
printf("I bore my house upon my back!\n");
}
