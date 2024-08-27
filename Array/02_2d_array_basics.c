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
        {01, 02, 03, 04, 05}, // row 1
        {11, 12, 13, 14, 15}, // row 2
        {16, 21, 33, 40, 51}  // row 3
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Array[%d][%d] \t: %d \n",i,j,arr[i][j]);
        }
    }

    int size = sizeof(arr) / sizeof(arr[0][0]);
    printf("NO Of Element In Array \t: %d", size);

    return 0;
}
