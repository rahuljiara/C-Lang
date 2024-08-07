// Swapping Program Using Call By Value

#include <stdio.h>
#include <conio.h>

/* 
                                  Topic Content 

In call by reference method of parameter passing, the address of the actual parameters 
is passed to the function as the formal parameters. 
In C, we use pointers to achieve call-by-reference.

    -> Any changes made inside the function are actually reflected in the actual parameters of the caller.

*/

// Function declaration
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("After Swapping :-\n X = %d \n Y = %d \n",*x,*y);
}

int main (){
printf("Call By Reference Method With User Input \n");

int a,b;
printf("Enter Value Of 1st Number \t:");
scanf("%d",&a);
printf("Enter Value Of 2nd Number \t:");
scanf("%d",&b);



printf("Before Swap :-\n X = %d \n Y = %d \n",a,b);

swap(&a,&b);

return 0;
}