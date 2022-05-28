/////////////////////////////////////////////////////////////////////////////
// Problem Statement 4 : Program which accepts num form user and returns the 
//                      Summition of the NON - factors. 
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt != 0)
        {
            iSum = iSum+iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue); 
    printf("%d\t", iRet);

    return 0;
}