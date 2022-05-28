// ip = 4
// op = 1 2 3 4 4 3 2 1 
// Complixety = 2N

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt=1 ; iCnt<=iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
    iCnt = iNo;
    for(iCnt = iNo; iCnt>=1; iCnt--)
    {
        printf("%d\t",iCnt);
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