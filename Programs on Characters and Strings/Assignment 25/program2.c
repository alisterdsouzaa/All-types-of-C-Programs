////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 2 : Write a program which accepts string from the user and converts
//                      that string to Upper case. 
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void struprX(char ch[])
{
    while(*ch != '\0')
    {
        if(*ch>='a' && *ch<='z')
        {
            *ch = *ch - 32; 
        }
        ch++; 
    }
   
}

int main ()
{
    char ch[30];

    puts("Enter String :");
    gets(ch); 

    struprX(ch);

    printf("String in uppercase case is : %s", ch);

    return 0;
}