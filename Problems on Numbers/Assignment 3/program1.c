/////////////////////////////////////////////////////////////////////////////
// Problem Statement 1 : Program which accepts num form user and returns the 
//                      even numbers of the input given. 
/////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void PrintEven(int iNo)
{
    auto int iCnt =0;
    if(iNo<=0)
    {
        return;
    }

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
       int Even = 2 * iCnt;
       printf("%d\t", Even); 
    }


}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    PrintEven(iValue); 

    return 0; 
}