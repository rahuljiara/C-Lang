/*
    Create a program to find maximum number out of two number

*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
    int num1,num2;
    printf("Enter 1st Number \t");
    scanf("%d",&num1);
    printf("Enter 2nd Number \t");
    scanf("%d",&num2);

    if(num1 > num2){
        printf("%d(1st) > %d(2nd)",num1,num2);
    }else{
        printf("%d(2nd) > %d(1st)",num2,num1);
    }
    
}