////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 3 : Write a recursive program which accept String from the user and 
//                      count the small characters in the string.
/////////////////////////////////////////////////////////////////////////////////////////////////////////

// INPUT : HElloWorld
// OUTPUT: 7

#include<stdio.h>
int SmallChar(char *Arr)
{
   static int iCnt = 0;
  if(*Arr != '\0')
  {
    if(*Arr>='a' && *Arr<='z')
    {
    iCnt++; 
    }    
    SmallChar(++Arr);
  }
   return iCnt;
}

int main ()
{
    char String[20];
    int iRet =0;
    printf("Enter String :\n");
    scanf("%[^'\n']s", String);

     iRet = SmallChar(String);
     printf("Number of small characters are : %d ", iRet);

    return 0;
}