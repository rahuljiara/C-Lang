/*
    create a program which can swap it's value.
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int a = 10;
    int b = 20;
    int c;
        printf("Then :- \n a = %d \t b = %d \n",a,b);
        c = b;
        b = a;
        a = c;

        /*  or
            c = a;
            a = b;
            b = c;
        */

        /*
            first we made variable a, b, c.
            a & b have value but c is empty variable.
            now we put value of b in c , now b is empty & c has value ->
            then we put value of a in b, now a is empty b & c have value ->
            then we put value of c in a, now a & c have same value & value is swapped in both variable a & b.
            previously a = 10, b = 20, c = 0 now a = 20, b = 10, c = 20;
        */

        printf("Now :- \n a = %d \t b = %d \t c = %d \n\n\n",a,b,c);

    int num1 = 10,num2 = 20,num3 = 30,num4 = 40,num5;
    printf("PREVIOUS VALUE :- \n num1 = %d \t num2 = %d \t num3 = %d \t num4 = %d \n\n",num1,num2,num3,num4);
    num5 = num1;
    num1 = num2;
    num2 = num3;
    num3 = num4;
    num4 = num5;
    printf("SWAPPED VALUE :- \n num1 = %d \t num2 = %d \t num3 = %d \t num4 = %d \t num5 = %d",num1,num2,num3,num4,num5);

}