////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 2 : Write a program which accepts string from the user and converts
//                      that string to Upper case. 
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountWhite(char ch[])
{
    int iCnt =0;
    while(*ch != '\0')
    {
        if(*ch ==' ')
        {
          iCnt++; 
        }
        ch++; 
    }
    return iCnt;
   
}

int main ()
{
    char ch[30];
    int iRet = 0;

    puts("Enter String :");
    gets(ch); 

   iRet = CountWhite(ch);

    printf("The number of white spaces in String are : %d", iRet);

    return 0;
}