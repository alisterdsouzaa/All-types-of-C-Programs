////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 5 : Write a recursive program which accept Number from the user and 
//                       return its reverse number.
/////////////////////////////////////////////////////////////////////////////////////////////////////////

// INPUT : 1313
// OUTPUT: 3131

#include<stdio.h>
int reverseNumber(int iNo)
{
   int iDigit = 0; 
   static int iReverse =0;
   if(iNo>0)
   {
     iDigit = iNo%10;
     iReverse = iReverse * 10 + iDigit;
     iNo = iNo/10;
     reverseNumber(iNo);
   }
   return iReverse;
}

int main ()
{
    int iValue = 0;
    int iRet =0;
    printf("Enter Number :\n");
    scanf("%d", &iValue);

     iRet = reverseNumber(iValue);
     printf("Reverse number is : %d ", iRet);

    return 0;
}