////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 4 : Write a recursive program which accept Number from the user and 
//                       return its factorial.
/////////////////////////////////////////////////////////////////////////////////////////////////////////

// INPUT : 5
// OUTPUT: 120

#include<stdio.h>
int Factorial(int iNo)
{
    static unsigned long int iFact = 1;
    if(iNo>0)
    {
        iFact = iFact * iNo;
        iNo--; 
        Factorial(iNo);
    }

    return iFact;
}

int main ()
{
    int iValue = 0;
    unsigned long int iRet =0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

     iRet = Factorial(iValue);
     printf("Factorial of Number %d is -> %d  ", iValue, iRet);

    return 0;
}