/*
    Create a program which takes input of circle then find - area, perimeter & dimeterl of rectangle.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
    float radius,perimeter,area,diameter;

    printf("Enter Radius Of Circle \t");
    scanf("%f",&radius);

    area = 3.14 * radius * radius;
    // area = pi * square of radius
    perimeter =  2*(3.14 * radius);
    // perimeter = 2*pi*r
    diameter = 2*radius;

    printf("Perimeter Of Circle = \t %f\n",perimeter);
    printf("Area Of Circle = \t %f\n",area);
    printf("Diameter Of Circle = \t %f\n",diameter);
}