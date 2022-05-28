//////////////////////////////////////////////////////////////////////////
// Problem Statement 3 : Write a program which accepts num from user
//    and returns the count of digits in between 3 & 7.
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountRange(int iNo)
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
       if((iDigit>3) && (iDigit<7))
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

    iRet =CountRange(iValue);
    printf("The count of digits in in between 3 & 7 in number %d is %d:", iValue,iRet);

    return 0;
}