////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 2 : Write a program which accepts string from the user and Display
//                      only Digits of that string. 
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigits(char ch[])
{
    while(*ch != '\0')
    {
        if(*ch>='0' && *ch<='9')
        {
            printf("%c", *ch);
        }
        ch++; 
    }
   
}

int main ()
{
    char ch[30];

    puts("Enter String :");
    gets(ch); 

    DisplayDigits(ch);
    return 0;
}