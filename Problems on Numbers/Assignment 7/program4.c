//////////////////////////////////////////////////////////////////////////
// Problem Statement 4 : Write a program which accepts num from user
//    and returns the Multiplication of each digit.
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultDigits(int iNo)
{
    int iMult = 1;
    int iDigit = 0;
    if(iNo<0)
    {
        iNo= -iNo;
    }

    while(iNo!=0)
    {
       iDigit = iNo%10;
       iMult = iMult *iDigit; 
       iNo=iNo/10;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet =0;
    printf("Enter Number :");
    scanf("%d", &iValue); 

    iRet =MultDigits(iValue);
    printf("The multiplication of digits in %d is %d:", iValue,iRet);

    return 0;
}