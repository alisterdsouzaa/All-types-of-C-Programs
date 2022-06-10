///////////////////////////////////////////////////////////////////////////////
// Problem Statement 1 : Write a program which accepts string form the user and
//                      count the number of capital characters in it. 
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt =0;
    while(*str != '\0')
    {
        if(*str>='A' && *str<='Z')
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

    iRet = CountCapital(cString);
    printf("Number of capital characters in String are : %d", iRet);


    return 0;
}