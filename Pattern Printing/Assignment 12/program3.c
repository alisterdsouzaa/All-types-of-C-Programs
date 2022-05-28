//////////////////////////////////////////////////////////////////////
// Problem Statement 3: Accept number from user and display pattern.
////////////////////////////////////////////////////////////////////////

// ip = 5
// op = 1 * 2 * 3 * 4 * 5 *

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("%d\t*\t",iCnt);
      
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