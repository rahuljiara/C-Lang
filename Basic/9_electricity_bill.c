/*
    Create a program which takes input of unit consumed & find the total ammount of consumed electricity.
    1. Price Per Unit
    2. Tax & Duty (%)
    3. Subsidy Provided (%)
    4. Total Month
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    float unit_cost,unit_consumed, taxes, subsidy, month, net_price;

    printf("Enter Per Unit Cost (In Rupees)\t");
    scanf("%f", &unit_cost);
    printf("Enter Consumed Unit \t");
    scanf("%f", &unit_consumed);
    printf("Enter Taxes On Electricity (In Percentage Only) \t");
    scanf("%f", &taxes);
    printf("Enter If Any Subsidy Provided (In Percentage Only) \t");
    scanf("%f", &subsidy);
    printf("Total Month \t");
    scanf("%f", &month);


    float total_unit_price = unit_consumed*unit_cost;
    float total_amount = total_unit_price + ((total_unit_price*taxes)/100);
    net_price = (total_amount - ((total_unit_price * subsidy)/100)) * month;

    printf("\n \n TOTAL PRICE = %.3f Rupees Only",net_price);
}