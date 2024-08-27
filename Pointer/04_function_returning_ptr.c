// C program to illustrate the concept of
// returning pointer from a function
#include <stdio.h>

// Function returning pointer
int *fun(int a)
{
	printf("A \t \t: %d \n", a);
}

// Driver Code
int main()
{
	int x = 20;

	// Declare a pointer
	int *p;

	// Store pointer function in pointer variable.
	p = fun(x);

	printf("Address Of Function \t: %p\n", p);
	printf("Address Of X \t\t: %p\n", x);
	printf("X \t \t: %d\n", x);
	return 0;
}
