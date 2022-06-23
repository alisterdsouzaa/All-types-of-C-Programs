////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 1 : Write a recursive program which accept String from the user and 
//                      count the white spaces in the string.
/////////////////////////////////////////////////////////////////////////////////////////////////////////

// INPUT : HE llo Wor Ld
// OUTPUT: 3

#include<stdio.h>
int WhiteSpace(char *Arr)
{
   static int iCnt = 0;
  if(*Arr != '\0')
  {
    if(*Arr == ' ')
    {
    iCnt++; 
    }    
    WhiteSpace(++Arr);
  }
   return iCnt;
}

int main ()
{
    char String[20];
    int iRet =0;
    printf("Enter String :\n");
    scanf("%[^'\n']s", String);

     iRet = WhiteSpace(String);
     printf("Number of white spaces are : %d ", iRet);

    return 0;
}