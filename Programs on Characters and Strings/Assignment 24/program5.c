///////////////////////////////////////////////////////////////////////////////
// Problem Statement 5 : Write a program which accepts string form the user and
//                      display it in reverse order. 
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayReverse(char *str)
{
  char *start = str;
  char *end = str; 
  char ch ='\0';

  while (*end != '\0')
  {
      end++;
  }
   end--; 

   while(start < end)
   {
       ch = *start;
       *start = *end; 
       *end = ch; 

       start++;
       end--;
   }

  
}

int main()
{
    char cString[50];
     puts("Enter String :");
     gets(cString);

    DisplayReverse(cString);
    printf("Reversed String is : %s", cString);
    
    return 0;
}