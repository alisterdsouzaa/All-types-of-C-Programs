//////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 1 : Write a pogram which accepts a string from the user and copy the contents 
//                      of that string into another string. 
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strcpyX(char *src, char *dest)
{
   
    while(*src != '\0')
    {
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

    puts("Enter string :");
    gets(Str1);

    strcpyX(Str1, Str2);
    printf("Copyied String is : %s", Str2); 

    return 0;
}