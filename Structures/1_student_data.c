/*
    Take a input through user of total number of student then take a input of all details 
    of total number of students - Name, Roll Number, Date OF Birth, Marks Using Structure.
*/

#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int roll;
    char dob[10];
    float marks;
};
void main()
{
    int n;
    struct student std[n];
    printf("Enter Total Number Of Student \t");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter Name \t\t\t\t:");
        scanf("%s", &std[i].name);

        printf("Enter Roll Number \t\t\t:");
        scanf("%d", &std[i].roll);

        printf("Enter Date Of Birth (dd/mm/yyyy) \t:");
        scanf("%s", &std[i].dob);

        printf("Enter Marks \t\t\t\t:");
        scanf("%f", &std[i].marks);

        printf("\n");
    }
    if (n <= 0)
    {
        printf("Number Of Student Can't Be 0 Or Below Zero\n");
    }
    else if (n == 1)
    {
        printf("List Of Student");
        for (int i = 1; i <= n; i++)
        {
            printf("\n Student - %d \n", i);
            printf("\t Name \t\t: %s\n", std[i].name);
            printf("\t Roll No. \t: %d\n", std[i].roll);
            printf("\t Date Of Birth \t: %s\n", std[i].dob);
            printf("\t Total Marks \t: %.2f\n", std[i].marks);
        }
    }
    else
    {
        printf("List Of All %d Students", n);
        for (int i = 1; i <= n; i++)
        {
            printf("\n Student - %d \n", i);
            printf("\t Name \t\t: %s\n", std[i].name);
            printf("\t Roll No. \t: %d\n", std[i].roll);
            printf("\t Date Of Birth \t: %s\n", std[i].dob);
            printf("\t Total Marks \t: %.2f\n", std[i].marks);
        }
    }
}