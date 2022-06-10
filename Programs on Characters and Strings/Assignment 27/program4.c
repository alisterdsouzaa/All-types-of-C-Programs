//////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 4 : Write a pogram which accepts a string from the user and copy the Small characters 
//                      of that string into another string . 
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strcpySmall(char *src, char *dest)
{
    
    while(*src != '\0')
    {
        if(*src>='a' && *src<='z')
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

    strcpySmall(Str1, Str2);
    printf("Copyied String of Small Characters is : %s", Str2); 

    return 0;
}