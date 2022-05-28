////////////////////////////////////////////////////////////////////
// Problem Statement 2: Accept one number from that user and print
//                       that number of * on console.
////////////////////////////////////////////////////////////////////

#include<stdio.h> 

void Display(int iNo)
{
    while(iNo>0)
    {
        printf("*");
        iNo--; 
    }
}

int main()
{
    int iValue =0; 

    printf("Enter Number :");
    scanf("%d", &iValue); 

    Display(iValue); 

    return 0;
}
