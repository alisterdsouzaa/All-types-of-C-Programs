///////////////////////////////////////////////////////////////////////////////////////////
// Problem statement 2 : Accept a string from the user and accept one character. return
//                      frequency of that character. 
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int CheckFreq(char *ch, char c)
{
    int iFreq = 0;
    while(*ch != '\0')
    {
        if(*ch == c)
        {
            iFreq++; 
        }
        ch++; 
    }
   return iFreq; 
}

int main ()
{
    char str[20];
    char ch = '\0';
    int iRet = 0;

    puts("Enter String : ");
    gets(str); 

    puts("Enter Character :");
    scanf("%c", &ch );

    iRet = CheckFreq(str, ch); 
    printf("Frequency of character is : %d", iRet);

    return 0; 
}