// 4
// -4 -3 -2  -1 0 1 2 3 4
//Complexity :  2N + 1

#include<stdio.h>

void Pattern(int iNo)
{
    // updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // main logic fun
    int iCnt = 0;

    for(iCnt = -iNo; iCnt<=iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements :");
    scanf("%d", &iValue);

    Pattern(iValue);
    return 0; 
}