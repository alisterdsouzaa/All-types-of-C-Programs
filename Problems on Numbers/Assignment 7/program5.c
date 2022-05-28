/////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 5 : Write a program which accepts num from user
//    and returns the difference between summition of even digits and summition of odd digits.
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountDiff(int iNo)
{
    int iCntEven = 0;
    int iDigit = 0 , iCntOdd = 0;
    if(iNo<0)
    {
        iNo= -iNo;
    }

    while(iNo!=0)
    {
       iDigit = iNo%10;
       if(iDigit%2==0)
       {
         iCntEven = iCntEven + iDigit; 
       }
       if(iDigit%2 != 0)
       {
           iCntOdd = iCntOdd + iDigit;
       }
       iNo=iNo/10;
    }

    return iCntEven - iCntOdd;
}

int main()
{
    int iValue = 0;
    int iRet =0;
    printf("Enter Number :");
    scanf("%d", &iValue); 

    iRet =CountDiff(iValue);
    printf("The Diff of Sum Even digits & Sum of Odd Digits is %d:",iRet);

    return 0;
}