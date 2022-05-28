/////////////////////////////////////////////////////////////////////////////
// Problem Statement 1 : Program which accepts num form user and returns the 
//                      multiplication of its factors. 
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt == 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;

}

int main()
{
    int iValue = 0;
    auto int iRet = 0; 

    printf("Enter Number :");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("Multipication of Factors is : %d", iRet);

     return 0;
}