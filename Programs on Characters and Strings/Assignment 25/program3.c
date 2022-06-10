////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 3 : Write a program which accepts string from the user and toggel
//                      that string. 
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strtoggelX(char ch[])
{
    while(*ch != '\0')
    {
        if(*ch>='a' && *ch<='z')
        {
            *ch = *ch - 32; 
        }
        else if(*ch>='A' && *ch<='Z')
        {
            *ch = *ch + 32; 
        }
        ch++; 
    }
   
}

int main ()
{
    char ch[30];

    puts("Enter String :");
    gets(ch); 

    strtoggelX(ch);

    printf("Toggeled String  is : %s", ch);

    return 0;
}