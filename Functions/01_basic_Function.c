#include <stdio.h>
#include <conio.h>

/* 
                                  Topic Content 

A function in C is a set of statements that when called perform some specific task. 
The programming statements of a function are enclosed within { } braces.
Syntax of Functions in C -
   -> Function Declaration
        return_type name_of_the_function (parameter_1, parameter_2);


   -> Function Definition
        return_type function_name (para1_type para1_name, para2_type para2_name)
        {
            // body of the function
        }


   -> Function Calls
        function_name ();

*/


// Function Declaration
void fn(int a, int b, int c);

//Function Declaration And Defination
void fn2(){
    printf("We Can Define Function During Function Declration,\n Don,t Need To Define After The Main() Function");
}

int main()
{
    int x, y, z;
    x = 10;
    y = 20;
    z = 30;

    // Function Call
    fn(x, y, z);
    fn2();

    return 0;
}


// Function Defination
void fn(int a, int b, int c)
{
    printf("Value Of :- \n X = %d \n Y = %d \n Z = %d \n", a, b, c);

}