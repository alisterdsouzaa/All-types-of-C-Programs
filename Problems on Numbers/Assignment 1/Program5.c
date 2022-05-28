////////////////////////////////////////////////////////////////////////
//  Problem Statement 5 : Accept one number from the user and print that 
//                        num of * on console. 
////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Accept(int iNo)
{
   int iCnt =0;
   for(iCnt=1;iCnt<=iNo; iCnt++)
   {
       printf("*");
   }
}

int main()
{
    int iValue =0;
    iValue =5; 

    Accept(iValue);
    return 0;
}