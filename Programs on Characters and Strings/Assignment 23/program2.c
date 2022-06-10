//////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 2: Accept Character from user. If character is small case displai its
//                      corresponding Capital char and vice versa. if char in not an aplahabet
//                      then print the enterd character. 
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    if(ch>='a' && ch<='z')
    {
        ch = ch - 32; 
        printf("%c", ch); 
    }
    else if(ch>='A' && ch<='Z')
    {
        ch = ch + 32; 
        printf("%c", ch); 
    }
    else
    {
        printf("%c", ch);
    }

}

int main()
{
    char ch = '\0';

    printf("Enter Character  :");
    scanf("%c", &ch); 

    Display(ch);

    return 0; 
}