///////////////////////////////////////////////////////////////////////////////////////////
// Problem statement 5 : Write a recursive program to dislpay below pattern. 
///////////////////////////////////////////////////////////////////////////////////////////

// Pattern :  a b c d e f

#include<stdio.h>
void Display(int iNo)
{
    static char ch = 'a';
    if(iNo>0)
    {
        printf("%c\t", ch++, iNo--); 
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