// Swapping Program Using Call By Value

#include <stdio.h>
#include <conio.h>

/* 
                                  Topic Content 

The call-by-value method allows you to copy the actual parameter to a formal parameter. 
In this case, if we change the formal parameter then the actual parameter doesn’t change;

Call by value is used in certain conditions like :-
   -> When you do not want to change the actual parameters of the function.
   -> When you want to make copies of the data instead of the actual data.
   -> When space is not an issue.
   -> Usually, when you do not deal with recursion or backtracking.

*/

// Function declaration
void swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("After Swapping :-\n X = %d \n Y = %d \n",x,y);
}

int main (){
int a,b;
a=10;
b =20;

printf("Before Swap :-\n X = %d \n Y = %d \n",a,b);

swap(a,b);
return 0;
}