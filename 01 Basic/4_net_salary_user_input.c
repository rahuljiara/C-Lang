/*
    Q1.  Find Net Salary & Gross Salary of an employee-
     Take input of Basic Salary, HRA(in %), TA(in %), PF(in %) deduction.

*/

#include <stdio.h>
#include <conio.h>

void main()
{
    float basic_salary,hra,ta,pf,net_salary,gross_salary;
    printf("Enter Your Base Salary \t");
    scanf("%f",&basic_salary);

    printf("Enter Your House Rent Allowance (HRA in '%') \t");
    scanf("%f",&hra);
     
    printf("Enter Your Travel Allowance(TA in '%') \t");
    scanf("%f",&ta);

    printf("Enter Your PF Deduction in '%' \t");
    scanf("%f",&pf);

    hra = basic_salary* hra/100;
    ta = basic_salary* ta/100;
    gross_salary = ta + hra + basic_salary;
    pf = gross_salary*pf/100;
    net_salary = gross_salary - pf;

    printf(" Basic Salary \t= %f \n HRA \t\t= %f \n TA \t\t= %f \n PF \t\t= %f \n Gross Salary \t= %f \n Net Salary \t= %f",basic_salary,hra,ta,pf,gross_salary,net_salary);

}