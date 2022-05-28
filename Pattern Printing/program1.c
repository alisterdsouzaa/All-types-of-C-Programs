// ip = 5
// op = *  *  * * *

#include<stdio.h>

void Pattern(int iNo)
{
    for(int iCnt =0; iCnt<iNo; iCnt++)
    {
        printf("*\t");
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