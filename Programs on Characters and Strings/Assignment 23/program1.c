//////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 1: Write a program which Displays ASCII Table. Table contains
//                      symbol, decimal, hexadecimal and octal representation of every member 
//                      from 0-255. 
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayASCII()
{
    int iCnt=0;

    printf("Decimal\t:\tHexaDecimal\t:\tOctal\n");

    for(iCnt=0; iCnt<=255; iCnt++)
    {
        printf("%d\t\t%x\t\t\t%o\n", iCnt,iCnt,iCnt);
    }
}

int main()
{

    DisplayASCII(); 

    return 0;
}