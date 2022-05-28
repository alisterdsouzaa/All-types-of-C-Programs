//////////////////////////////////////////////////////////////////////
// Problem Statement 5: Accept  number from  user and check wheather
//                       number is even or odd.
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL; 

BOOL ChkEven(int iNo)
{
    if((iNo%2)==0)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}

int main()
{
    int iValue=0;
    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    bRet=ChkEven(iValue);

    printf("One is for Even and Zero is for Odd : %d", bRet);

    return 0;
}