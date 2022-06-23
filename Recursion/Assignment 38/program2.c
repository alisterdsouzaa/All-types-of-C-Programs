////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 2 : Write a recursive program which accept number from the user and 
//                      summation of its digits.
/////////////////////////////////////////////////////////////////////////////////////////////////////////

// INPUT : 879
// OUTPUT: 24

#include<stdio.h>
int Display(int iNo)
{
    int iDigit = 0;
    static int iSum = 0; 
    if(iNo != 0)
    {
        iDigit = iNo%10; 
        iSum = iSum + iDigit; 
        iNo = iNo/10; 
        Display(iNo);
    }

    return iSum;
}

int main ()
{
    int iValue = 0;
    int iRet =0;
    printf("Enter Number :\n ");
    scanf("%d", &iValue);

     iRet = Display(iValue);
     printf("Summation of Digits are : %d ", iRet);

    return 0;
}