//////////////////////////////////////////////////////////////////////////
// Problem Statement 2 : Write a program which accepts num from user
//    and returns the count of ODD digits.
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountOdd(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    if(iNo<0)
    {
        iNo= -iNo;
    }

    while(iNo!=0)
    {
       iDigit = iNo%10;
       if((iDigit%2) !=0)
       {
           iCnt++;
       }
       iNo=iNo/10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet =0;
    printf("Enter Number :");
    scanf("%d", &iValue); 

    iRet =CountOdd(iValue);
    printf("The count of Odd digits in %d is %d:", iValue,iRet);

    return 0;
}