///////////////////////////////////////////////////////////////////////////////
// Problem Statement 2 : Write a program which accepts string form the user and
//                      count the number of small characters in it. 
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountSmallChar(char *str)
{
    int iCnt =0;
    while(*str != '\0')
    {
        if(*str>='a' && *str<='z')
        {
        iCnt++;
        }
        str++; 
    }
    return iCnt; 
}

int main()
{
    char cString[50];
    int iRet = 0;
     puts("Enter String :");
     gets(cString);

    iRet = CountSmallChar(cString);
    printf("Number of small characters in String are : %d", iRet);


    return 0;
}