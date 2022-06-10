//////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 3 : Write a pogram which accepts a string from the user and copy the Captial char 
//                      of that string into another string . 
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strcpyCap(char *src, char *dest)
{
    
    while(*src != '\0')
    {
        if(*src>='A' && *src<='Z')
        {
             *dest = *src; 
             dest++; 
        }
        src++;
    }
    *dest = '\0'; 

}

int main ()
{
    char Str1[30];
    char Str2[30];

    puts("Enter string :");
    gets(Str1);

    strcpyCap(Str1, Str2);
    printf("Copyied String of Captial Characters is : %s", Str2); 

    return 0;
}