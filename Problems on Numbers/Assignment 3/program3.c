/////////////////////////////////////////////////////////////////////////////
// Problem Statement 1 : Program which accepts num form user and returns the 
//                      even factors of that number. 
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo<0)
    {
        iNo = -iNo; 
    }

    for(iCnt=1; iCnt<iNo;iCnt++)
    {
        if(((iNo%iCnt)==0) && ((iCnt%2) == 0))
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
