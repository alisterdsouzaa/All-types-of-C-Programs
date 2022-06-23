///////////////////////////////////////////////////////////////////////////////////////////
// Problem statement 3 : Write a recursive program to dislpay below pattern. 
///////////////////////////////////////////////////////////////////////////////////////////

// Pattern :  5 4 3 2 1

#include<stdio.h>
void Display(int iNo)
{
    if(iNo>0)
    {
        printf("%d\t", iNo--); 
        Display(iNo); 
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number of times to dislpay :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}