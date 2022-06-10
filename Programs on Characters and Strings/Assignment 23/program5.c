/////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 5: Accept Character from user. And display its values in Decimal, Hex and Oct format
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
   printf("Decimal Values is    : %d\n", ch);
   printf("Octal Value is       : 0%o\n", ch);
   printf("Hexadecimal Value is : 0x%x\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter Character  :");
    scanf("%c", &cValue); 

    Display(cValue);

    return 0; 
}