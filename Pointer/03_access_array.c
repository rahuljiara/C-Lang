#include <stdio.h>

int main()
{
    int n;
    printf("Enter Size Of Array \t: ");
    scanf("%d",&n);
    int arr[n];
    int *ptr = arr;

    for (int i = 0; i < n; i++)
    {
        printf("Enter Only Integers value (%d/%d) \t: ",i+1,n);
        scanf("%d",ptr+i);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Data (%d/%d)\n",i+1,n);
        printf("PTR[i] \t\t: %d \n", ptr[i]);
        printf("*(PTR + i) \t: %d \n", *(ptr+i));
        printf("PTR + i \t: %d \n\n\n", ptr+i);
    }

    return 0;
}
