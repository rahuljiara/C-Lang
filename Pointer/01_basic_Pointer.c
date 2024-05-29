#include <stdio.h>
#include <conio.h>
int main(){
    int num1 = 10;
    int num2 = 20;
    int *ptr1;
    int *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;

    int sum = *ptr1 + *ptr2;

    printf("*PTR-1 = %d \n",*ptr1);
    printf(" PTR-1 = %d \n",ptr1);
    printf("*PTR-2 = %d \n",*ptr2);
    printf(" PTR-2 = %d \n",ptr2);
    printf(" SUM (*PTR-1 + *PTR-2) = %d \n",sum);
    
    return 0;
}