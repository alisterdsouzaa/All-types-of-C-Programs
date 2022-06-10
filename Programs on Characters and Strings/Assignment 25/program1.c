////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 1 : Write a program which accepts string from the user and converts
//                      that string to lower case. 
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strlwrX(char *ch)
{
    while(*ch != '\0')
    {
        if(*ch>='A' && *ch<='Z')
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

    strlwrX(ch);

    printf("String in lower case is : %s", ch);

    return 0;
}