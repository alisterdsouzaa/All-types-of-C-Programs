//////////////////////////////////////////////////////////////////////////
// Problem Statement 3 : Write a program which accepts num from user
//    and counts the frequency of number 2.
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountFrequency(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    while(iNo!=0)
    {
       iDigit = iNo%10;
       if(iDigit==2)
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

    iRet =CountFrequency(iValue);
    printf("the frequency of number 2 in %d is %d:", iValue,iRet);

    return 0;
}