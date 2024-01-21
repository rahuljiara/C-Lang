
#include <stdio.h>

void main()
{
    int num = 1;
    int sum = 0;
    int userNum;
    printf("Enter Number Up To You Wanted Odd Num \t");
    scanf("%d",&userNum);
    for(userNum;userNum>=num;userNum--){
       sum = sum*userNum;
       printf("%d",sum);
    }
}