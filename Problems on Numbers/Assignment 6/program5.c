//////////////////////////////////////////////////////////////////////////
// Problem Statement 5 : Write a program which accepts num from user
//    and counts the frequency of number who's value is less than 6.
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Count(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    while(iNo!=0)
    {
       iDigit = iNo%10;
       if(iDigit<6)
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

    iRet =Count(iValue);
    printf("the frequency of digits who are less than 6  in %d is %d:", iValue,iRet);

    return 0;
}