/*
    Create a program to find maximum number out of four number
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int num1, num2, num3, num4;
    printf("Enter 1st Number \t");
    scanf("%d", &num1);
    printf("Enter 2nd Number \t");
    scanf("%d", &num2);
    printf("Enter 3rd Number \t");
    scanf("%d", &num3);
    printf("Enter 4th Number \t");
    scanf("%d", &num4);

    if ((num1 > num2) && (num1 > num3) && (num1 > num4))
    {
        printf("%d(1st) > %d, %d & %d", num1, num2, num3, num4);
    }
    else if ((num2 > num3) && (num2 > num4) && (num2 > num1))
    {
        printf("%d(2nd) > %d, %d & %d", num2, num1, num3, num4);
    }
    else if ((num3 > num1) && (num3 > num4) && (num3 > num2))
    {
        printf("%d(3rd) > %d, %d & %d", num3, num1, num2, num4);
    }
    else
    {
        printf("%d(4th) > %d, %d & %d", num4, num1, num2, num3);
    }
}