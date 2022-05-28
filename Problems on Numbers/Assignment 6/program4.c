//////////////////////////////////////////////////////////////////////////
// Problem Statement 4 : Write a program which accepts num from user
//    and counts the frequency of number 4.
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountFour(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    while(iNo!=0)
    {
       iDigit = iNo%10;
       if(iDigit==4)
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

    iRet =CountFour(iValue);
    printf("the frequency of number 4 in %d is %d:", iValue,iRet);

    return 0;
}