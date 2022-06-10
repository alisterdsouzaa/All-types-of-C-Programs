////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 2 : Write a pogram which accepts a string from the user and copy the characters of that 
//                      string into another string by removing all white spaces.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrRemWhite(char src[], char dest[])
{   
    while(*src != '\0')
    {
        if(*src == ' ')
        {
            src++; 
        }
        else
        {
            *dest = *src; 
            src++; 
            dest++;
        }
    }
    *dest = '\0';

}

int main ()
{
    char Str1[30];
    char Str2[30];

    puts("Enter String 1 :");
    gets(Str1);

    StrRemWhite(Str1, Str2);
    printf("Copied string without white-spaces is  : %s", Str2); 

    return 0;
}