////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 3 : Write a pogram which accepts a string from the user and copy the characters of that 
//                      string into another string by converting all small characters into Capital characters.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyConvertCaps(char src[], char dest[])
{   
    while(*src != '\0')
    {

        if(*src>='a' && *src<='z')
        {
           *src = *src - 32;
        }
    
        *dest = *src; 
         src++; 
         dest++;
       
    }
    *dest = '\0';

}

int main ()
{
    char Str1[30];
    char Str2[30];

    puts("Enter String 1 :");
    gets(Str1);

    StrCpyConvertCaps(Str1, Str2);
    printf("Copied string in All CapsLock  is  : %s", Str2); 

    return 0;
}