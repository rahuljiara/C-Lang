/*
    understand basics of 3d array
    find number of element in #D array;
        -> no = size of array / size of one element

*/

#include <stdio.h>
#include <conio.h>

int main()
{
    // Array Initialization     data_type arrayName[blockSize][rowSize][columnSize];
    int arr[2][3][5] = {
        // Block 1
        {
            {01, 02, 03, 04, 05}, // row 1
            {11, 12, 13, 14, 15}, // row 2
            {16, 21, 33, 40, 51}  // row 3
        },
        // block 2
        {
            {21, 22, 23, 24, 25}, // row 1
            {31, 32, 33, 34, 35}, // row 2
            {46, 41, 43, 40, 61}  // row 3
        }};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                printf("Arr[%d][%d][%d] \t: %d\n", i, j, k, arr[i][j][k]);
            }
        }
    }
    int size = sizeof(arr) / sizeof(arr[0][0][0]);

    printf("\n Number Of Element \t: %d",size);

    return 0;
}
