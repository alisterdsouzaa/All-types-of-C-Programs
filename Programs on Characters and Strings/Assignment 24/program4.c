///////////////////////////////////////////////////////////////////////////////
// Problem Statement 4 : Write a program which accepts string form the user and
//                    check weather if it contains a vowel in it or not. 
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    bool flag = false;
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E'|| *str=='I'|| *str=='O'|| *str=='U' )
        {
            flag = true;
            break;
        }
        str++;
    }
    return flag; 
}

int main()
{
    char cString[50];
    bool bRet;
     puts("Enter String :");
     gets(cString);

    bRet = ChkVowel(cString);
    if(bRet == true)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("Does not contain a Vowel\n");
    }


    return 0;
}