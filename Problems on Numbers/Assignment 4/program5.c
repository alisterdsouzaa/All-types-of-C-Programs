/////////////////////////////////////////////////////////////////////////////
// Problem Statement 5 : Program which accepts num form user and returns the 
//                      difference of Sum of factors and Sum of non-factors. 
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0; 
    int iSum = 0;
    int iDiff = 0;

    for(iCnt=1;iCnt<iNo;iCnt++) // for factors 
    {
        if(iNo%iCnt == 0)
        {
            iSum = iSum + iCnt; 
        }
    }
        iCnt = 0; 
    for(iCnt=1;iCnt<iNo;iCnt++)  // loop for non factors
    {
        if((iNo%iCnt) != 0)
        {
            iDiff = iDiff + iCnt;
        }
    }

    return iSum - iDiff; 

}

int main()
{
    int iValue = 0; 
    int iRet = 0;
    printf("Enter Number :");
    scanf("%d", &iValue); 

    iRet = FactDiff(iValue);
    printf("The difference between Factors and Non-Factors are : %d", iRet);

    return 0; 
}