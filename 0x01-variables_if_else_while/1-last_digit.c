#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
    // declare variables
	int n, last_digit;
        // generate random numbers
	srand(time(0));
	n = rand() - RAND_MAX / 2;
    last_digit = n % 10;
        if (last_digit > 5)
        {
            //if the last digit of n is greater than 5: the string and is greater than 5
            printf("Last digit of %d is %d  and is greater than 5 \n", n, last_digit);
        } 
        else if (last_digit == 0 )
        {
            //if the last digit of n is 0: the string and is 0
            printf("Last digit of %d is %d  and is 0\n", n, last_digit);
        }
        else
        {
            //if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
            printf("Last digit of %d is %d and is less than 6 and not 0\n", n , last_digit);
        }
	return (0);
}
