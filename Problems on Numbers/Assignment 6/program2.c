////////////////////////////////////////////////////////////
// Problem Statement 2 : Write a program which accepts 
//  num from user and return count of ODD digits in it . 
//////////////////////////////////////////////////////////////
#include<stdio.h>
int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(iNo!=0)
    {
        iDigit = iNo % 10;
        if(iDigit%2 != 0)
        {
            iCount++;
        }
        iNo = iNo/10; 
    }
    return iCount;
}   
int main(){
    int iValue=0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue);
    printf("The num of ODD digits in num are : %d", iRet);


    return 0;
}
