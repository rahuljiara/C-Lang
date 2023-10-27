/*
    Create a program to find maximum number out of three number

*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int num1, num2, num3;
    printf("Enter 1st Number \t");
    scanf("%d", &num1);
    printf("Enter 2nd Number \t");
    scanf("%d", &num2);
    printf("Enter 3rd Number \t");
    scanf("%d", &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%d(1st) > %d & %d", num1, num2, num3);
        }
        else
        {
            printf("%d(3rd) > %d & %d", num3, num1, num2);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("%d(2nd) > %d & %d", num2, num1, num3);
        }
        else
        {
            printf("%d(3rd) > %d & %d", num3, num1, num2);
        }
    }
}