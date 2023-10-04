/*
    Q1. Find Net Salary with given data of a employee-
     Basic Salary - 20000
     HRA - 10% of basic salary
     TA  - 12% of basic salary
     PF  - deduct 5% of Gross salary
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    float basic_salary = 20000;
    float hra,ta,pf,net_salary,gross_salary;

    hra = basic_salary*.1;
    ta = basic_salary*.12;
    gross_salary = hra+ta+basic_salary;
    pf = gross_salary*.05;
    net_salary = gross_salary - pf;

    printf(" Basic Salary \t= %f \n HRA \t\t= %f \n TA \t\t= %f \n PF \t\t= %f \n Gross Salary \t= %f \n Net Salary \t= %f",basic_salary,hra,ta,pf,gross_salary,net_salary);

}