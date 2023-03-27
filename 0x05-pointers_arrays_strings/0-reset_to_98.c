#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void swap(int *x)
{

    *x = 98;
}
int main(void)
{

    int n = 420;
    printf("n is : %d\n", n);
    swap(&n);
    printf("n is : %d\n", n);
    return (0);
}
