////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 4 : Write a pogram which accepts a string from the user and copy the characters of that 
//                      string into another string in all small case.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyRev(char src[], char dest[])
{   
    while(*src != '\0')
    {
        if(*src>= 'A' && *src<='Z')
        {
            *src = *src + 32;
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

    StrCpyRev(Str1, Str2);
    printf("Copied string in all small case  : %s", Str2); 

    return 0;
}