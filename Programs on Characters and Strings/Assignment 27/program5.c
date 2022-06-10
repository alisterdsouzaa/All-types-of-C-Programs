//////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 5 : Write a pogram which accepts 2 strings from the user and concat second string 
//                      after first string. 
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCatX(char *src, char *dest)
{   

    while(*src != '\0')
    {
        src++; 
    }
   
    while(*dest !='\0')
    {
        *src = *dest; 
        src++; 
        dest++; 
    }

  *src = '\0';

}

int main ()
{
    char Str1[50];
    char Str2[50];

    puts("Enter String 1 :");
    gets(Str1);
  
    puts("Enter String 2 :");
    gets(Str2); 


    StrCatX(Str1, Str2);
    printf("String 1 after concatination is : %s", Str1); 

    return 0;
}