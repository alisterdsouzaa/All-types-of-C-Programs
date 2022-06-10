//////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 1 : Write a pogram which accepts a string from the user and copy the contents 
//                      of that string into another string. 
// 
// Note : If the third parameter is greater than the size of sourcing string then copy the whole string. 
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strcpyX(char *src, char *dest, int iCnt)
{
    
    while(*src != '\0' && iCnt != 0)
    {
        *dest = *src; 
        src++; 
        dest++;
        iCnt--;
    }
    *dest = '\0'; 

}

int main ()
{
    char Str1[30];
    char Str2[30];
    int iCnt = 0;

    puts("Enter string :");
    gets(Str1);

    puts("Enter Counter :");
    scanf("%d", &iCnt);

    strcpyX(Str1, Str2, iCnt);
    printf("Copyied String is : %s", Str2); 

    return 0;
}