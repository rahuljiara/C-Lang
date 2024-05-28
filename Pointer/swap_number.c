#include <stdio.h>
#include <conio.h>
int main(){
    int num1 = 10;
    int num2 = 20;
    int num3;
    int *ptr1;
    int *ptr2;
    int *ptr3;
    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &num3;

    printf("BEFORE SWAPPING \n");
    printf("*PTR-1 = %d \n",*ptr1);
    printf(" PTR-1 = %d \n",ptr1);
    printf("*PTR-2 = %d \n",*ptr2);
    printf(" PTR-2 = %d \n\n\n\n",ptr2);



    ptr3 = ptr1; //assign num1 address in ptr3 using pointer ptr1
    ptr1 = ptr2;  //assign ptr2 address in ptr1
    ptr2 = ptr3; //assign num3 address in ptr2 using pointer ptr3

    printf("AFTER SWAPPING \n");
    printf("*PTR-1 = %d \n",*ptr1);
    printf(" PTR-1 = %d \n",ptr1);
    printf("*PTR-2 = %d \n",*ptr2);
    printf(" PTR-2 = %d \n",ptr2);

    return 0;
}