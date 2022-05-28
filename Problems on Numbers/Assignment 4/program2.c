/////////////////////////////////////////////////////////////////////////////
// Problem Statement 2 : Program which accepts num form user and dsiplay its factors
//                      in decresing order.  
/////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt=(iNo/2);iCnt>=1; iCnt--)
    {
        if(iNo%iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
    }

}

int main()
{
    int iValue = 0;
    printf("Enter Number :");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}