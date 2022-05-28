/////////////////////////////////////////////////////////////////////////////
// Problem Statement 2: Program which accepts num form user and returns the 
//                      factors. 
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo<0)
    {
        iNo = -iNo; 
    }

    for(iCnt=1; iCnt<(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            printf("%d\t", iCnt );
        }
    }
}
int main(){
    auto int iValue = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    DisplayFactor(iValue);
    return 0;
}
