///////////////////////////////////////////////////////////////////////////////
// Problem Statement 3 : Write a program which accepts string form the user and
//                     return difference of frequency of capital and small characters.
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountFreqDiff(char *str)
{
    int iCntSmall =0;
    int iCntCapital = 0;
    while(*str != '\0')
    {
        if(*str>='a' && *str<='z')
        {
        iCntSmall++;
        }
        else if(*str>='A' && *str<='Z')
        {
            iCntCapital++; 
        }
        str++; 
    }

    return iCntSmall-iCntCapital; 
}

int main()
{
    char cString[50];
    int iRet = 0;
     puts("Enter String :");
     gets(cString);

    iRet = CountFreqDiff(cString);
    printf(" Difference of Capital and Small Characters are : %d", iRet);


    return 0;
}