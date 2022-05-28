/////////////////////////////////////////////////////////////////////////////
// Problem Statement 3: Accept on number from the user, if the number is 
//                      less than 10 then print Hello else print Demo.
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    if(iNo<10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue =0;

    printf("Enter your number :"); 
    scanf("%d", &iValue);

    Display(iValue); 

    return 0; 
}