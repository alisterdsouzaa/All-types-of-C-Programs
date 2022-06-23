////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 1 : Write a recursive program which accept number from the user and Display pattern.
/////////////////////////////////////////////////////////////////////////////////////////////////////////

// INPUT : 5
// OUTPUT: 5 * 4 * 3 * 2 * 1 *

#include<stdio.h>
void Display(int iNo)
{
    if(iNo>0)
    {
        printf("%d * ", iNo); 
        iNo--;
        Display(iNo);
    }
}

int main ()
{
    int iValue = 0;
    printf("Enter Number :\n ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}