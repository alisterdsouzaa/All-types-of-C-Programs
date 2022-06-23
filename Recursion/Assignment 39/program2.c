////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 2 : Write a recursive program which accept Number from the user and 
//                      and return its largest digit.
/////////////////////////////////////////////////////////////////////////////////////////////////////////

// INPUT : 87983
// OUTPUT: 9

#include<stdio.h>
int largestDigit(int iNo)
{
   int iDigit = 0;
   static int ilarge = 0;
   if(iNo>0)
   {
     iDigit = iNo%10; 
     if(iDigit>ilarge)
     {
        ilarge = iDigit; 
     }
     iNo = iNo/10;
     largestDigit(iNo);
   }

   return ilarge;
}

int main ()
{
    int iValue = 0;
    int iRet =0;
    printf("Enter Number :\n");
    scanf("%d", &iValue);

     iRet = largestDigit(iValue);
     printf("largest digit is: %d ", iRet);

    return 0;
}