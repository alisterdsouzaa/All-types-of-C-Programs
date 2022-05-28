//////////////////////////////////////////////////////////////////////////////
// Problem Statement 5 : Accept number form user and Display the below pattern.
///////////////////////////////////////////////////////////////////////////////

// I/P = 8
// O/P = 2 4 6 8 10 12 14 16 

#include<stdio.h>

void Pattern(int iNo)

{
    int iMult = 1; 
    for(int iCnt =1; iCnt<=iNo; iCnt++)
    {
        iMult = iCnt * 2;
        printf("%d\t", iMult);
        iMult = 0;
       
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of eleemnts :");
    scanf("%d", &iValue);

    Pattern(iValue);
    return 0; 
}