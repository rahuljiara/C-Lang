/*
   Divisor) Dividend ( Quotient
                ||
                ||
            ----------
             Reminder       

    -> Reminder - %
    -> Quotient - /   

    To find quotient we can use integer and float both value, but for reminder we must 
    have to use integer value because reminder cant be a decimal value it is always a integer value.
      
            
*/

#include <stdio.h>

int main()
{
    // long long int -> can hold large integer data 
   long long int divisor, dividend,reminder, quotient;

    printf("Enter Value Of Dividend \t");
    scanf("%lld",&dividend);
    printf("Enter Value Of Divisor \t");
    scanf("%lld",&divisor);
    
    quotient = dividend / divisor;
    reminder =  dividend % divisor;

    printf("Quotient = %lld \n",quotient);
    printf("Reminder = %lld \n",reminder);



return 0;
}