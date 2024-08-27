/*
    understand basics of 2d array
    find number of element in 2D array;
        -> no = size of array / size of one element

*/

#include <stdio.h>
#include <conio.h>

int main()
{
    // Array Initialization     data_type arrayName[rowSize][columnSize];
    int arr[3][5] = {
     //  c1  c2  c3  c4  c5
        {01, 02, 03, 04, 05},  // row 1
        {11, 12, 13, 14, 15},  // row 2
        {16, 21, 33, 40, 51}}; // row 3

    /*
        find total no of element
            -> find size of array (eg:- 20)
            -> divide by the size of data type or any elemnt size of the array.
                int     - 4
                float   - 4
                char    - 1
    */
    int arrSize = sizeof(arr);
    printf("Array Size \t: %d\n", arrSize);

    // Array is interger type so we check size of int as well as one element of array
    int intSize = sizeof(int);
    int arrElemSize = sizeof(arr[0][0]);

    // Instead of if else condition, i used ternary operator.
    (intSize == arrElemSize) ? printf("Both have same size \t: %d\n", intSize),
        printf(" intSize = %d \n arrElemSize = %d \n", intSize, arrElemSize)
                             : printf("Both have different size \nintSize = %d \narrElemSize = %d", intSize, arrElemSize);

    // Finding Size of array
    int size = arrSize / arrElemSize;
    printf("NO Of Element In Array \t: %d", size);

    return 0;
}
