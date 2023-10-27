/*
    Create a program to find even & odd number.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int num;
    printf("Enter Any Number To Check Even Or Odd Number \t");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is the even number", num);
    }
    else
    {
        printf("%d is the odd number", num);
    }
}