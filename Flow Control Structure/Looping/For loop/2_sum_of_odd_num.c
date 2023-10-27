/*
    Create a program tocalculate the sum of 1st 20 odd number.
*/

#include <stdio.h>

void main()
{
    int num = 0, sum = 0;
    for (num; num <= 40; num++)
    {
        if (num % 2 != 0)
        {
            sum = sum + num;
            printf("%d \t",num);
        }
    }
    printf("\n\n %d is the sum of 1st 20 odd number\n", sum);
}