///////////////////////////////////////////////////////////////////////////////////////////
// Problem statement 2 : Write a recursive program to dislpay below pattern. 
///////////////////////////////////////////////////////////////////////////////////////////

// Pattern :  1 2 3 4 5

#include<stdio.h>
void Display(int iNo)
{
    static int i = 1;
    if(i<=iNo)
    {
        printf("%d\t", i++); 
        Display(iNo); 
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number of times to dislpay  :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}