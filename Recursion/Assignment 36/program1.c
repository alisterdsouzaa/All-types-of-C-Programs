///////////////////////////////////////////////////////////////////////////////////////////
// Problem statement 1 : Write a recursive program to dislpay below pattern. 
///////////////////////////////////////////////////////////////////////////////////////////

// Pattern :  * * * * * 

#include<stdio.h>
void Display(int iNo)
{
    char ch = '*'; 
    static int i = 0;
    if(i<iNo)
    {
        printf("%c\t", ch, i++); 
        Display(iNo); 
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number of times to dislpay * :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}