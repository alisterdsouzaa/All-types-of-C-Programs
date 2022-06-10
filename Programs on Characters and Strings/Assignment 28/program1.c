////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 1 : Write a pogram which accepts a string from the user and copy the characters of that 
//                      string in reverse order.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyRev(char src[], char dest[])
{   
   char *end = src; 
   int iCnt = 0;

   while(*end != '\0')
   {
     end++;
     iCnt++;
   }
   end--;

   while( iCnt != 0)
   {
      *dest = *end; 
      end--;
      iCnt--;
      *dest++;
   }
   *dest = '\0';

}

int main ()
{
    char Str1[50];
    char Str2[50];

    puts("Enter String 1 :");
    gets(Str1);

    StrCpyRev(Str1, Str2);
    printf("Copied string in reverse is  : %s", Str2); 

    return 0;
}