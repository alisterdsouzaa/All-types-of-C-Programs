////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 4 : Write a recursive program which accept Number from the user and 
//                      and return its smallest digit.
/////////////////////////////////////////////////////////////////////////////////////////////////////////

// INPUT : 87983
// OUTPUT: 3

#include<stdio.h>
int smallestDigit(int iNo)
{
   int iDigit = 0;
  static int iSmall = 9;
   if(iNo>0)
   {
     iDigit = iNo%10; 
     if(iSmall>iDigit)
     {
        iSmall = iDigit;
     }
     iNo = iNo/10;
     smallestDigit(iNo);
   }
   return iSmall;
}

int main ()
{
    int iValue = 0;
    int iRet =0;
    printf("Enter Number :\n");
    scanf("%d", &iValue);

     iRet = smallestDigit(iValue);
     printf("Smallest Digit is : %d ", iRet);

    return 0;
}