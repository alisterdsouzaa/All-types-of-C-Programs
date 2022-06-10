///////////////////////////////////////////////////////////////////////////////////////////
// Problem statement 5 : Accept a string from the user and reverse it in the same place. 
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int StrRevX(char *ch)
{
    char *start = ch; 
    char *end = ch;
    char character ='\0';

    while (*end != '\0')
    {
        end++; 
    }
    end--; 

    while(start<end)
    {
        character = *start;
        *start = *end;
        *end = character;

        start++; 
        end--;
    }
    
}

int main ()
{
    char str[20];
   
    puts("Enter String : ");
    gets(str);

    StrRevX(str); 
    printf("String after reverse is : %s", str);

    return 0; 
}