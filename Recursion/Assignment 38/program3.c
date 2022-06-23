////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 3 : Write a recursive program which accept String from the user and 
//                      count the charcters in the string.
/////////////////////////////////////////////////////////////////////////////////////////////////////////

// INPUT : Helllo
// OUTPUT: 5

#include<stdio.h>
#include<string.h>
int StrlenX(char *Arr)
{
   static int iCnt = 0;
  if(*Arr != '\0')
  {
    iCnt++; 
  //  Arr++;       
    StrlenX(++Arr);
  }
   return iCnt;
}

int main ()
{
    char String[20];
    int iRet =0;
    printf("Enter String :\n");
    scanf("%[^'\n']s", String);

     iRet = StrlenX(String);
     printf("NUmber of characters are : %d ", iRet);

    return 0;
}