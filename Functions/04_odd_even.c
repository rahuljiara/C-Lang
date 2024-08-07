// Program : Checking Odd Even Using Function

#include <stdio.h>
#include <conio.h>

void check(int x)
{

    if (x % 2 == 0)
    {
        printf("%d Is Even Number \n", x);
    }
    else
    {
        printf("%d Is Odd Number \n", x);
    }
}

int main()
{
    printf("Checking Odd Even Using Function \n");

    int a;
    printf("Enter Value To Check Odd Or Even Number \t:");
    scanf("%d", &a);

    check(a);

    return 0;
}