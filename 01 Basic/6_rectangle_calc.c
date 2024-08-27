/*
    Create a program which takes input of rectangle then find - area, perimeter & diagonal of rectangle.
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
    float length,width,perimeter,area,diagonal;

    printf("Enter Length Of Rectangle \t");
    scanf("%f",&length);
    printf("Enter Width Of Rectangle \t");
    scanf("%f",&width);

    area = length*width;
    // area = length X width
    perimeter = 2*(length + width);
    // perimeter = square of length + square of width
    diagonal = sqrt((length * length) + (width * width));
    // sqaure of diagonal = square of length + square of width
    // diagonal = squareroot of (square of length + square of width)

    printf("Perimeter Of Rectangle = \t %f\n",perimeter);
    printf("Area Of Rectangle = \t\t %f\n",area);
    printf("Diagonal Of Rectangle = \t %f\n",diagonal);
}