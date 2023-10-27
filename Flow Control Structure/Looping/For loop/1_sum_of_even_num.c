/*
    Create a program to calculate the sum of 1st 50 even number.
*/

#include <stdio.h>

void main()
{
    int num = 0, sum = 0;
    for (num; num <= 100; num++)
    {
        if (num % 2 == 0)
        {
            sum = sum + num;
            printf("%d \t",num);
        }
    }
    printf("\n\n %d is the sum of 1st 50 even number\n", sum);
}