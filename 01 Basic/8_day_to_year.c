/*
    Create a program to conver specified days into year, weeks, & days
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
    int input_days,year,week,days;

    printf("Enter Your days To Convert Into year \t");
    scanf("%d",&input_days);

    year = input_days / 365;
    week = (input_days % 365)/7;
    days = input_days - ((year*365) + (week*7));
    printf("%d Year, %d month & %d days \n",year,week,days);
}