////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 5 : Write a recursive program which accept number from the user and return its
//                       product of its digits.
/////////////////////////////////////////////////////////////////////////////////////////////////////////

// INPUT : 523
// OUTPUT: 30

#include<stdio.h>
int productOfDigits(int iNo)
{
    int iDigit = 0;
    static int iProduct = 1; 
    if(iNo != 0)
    {
        iDigit = iNo%10; 
        iProduct = iProduct * iDigit; 
        iNo = iNo/10; 
        productOfDigits(iNo);
    }

    return iProduct;
}

int main ()
{
    int iValue = 0;
    int iRet =0;
    printf("Enter Number :\n");
    scanf("%d", &iValue);

     iRet = productOfDigits(iValue);
     printf("Product of Digits are : %d ", iRet);

    return 0;
}