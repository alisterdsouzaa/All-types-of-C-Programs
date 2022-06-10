//////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 3: Accept Character from user. If character is capital case then display all
//                      the characters till Z. if Input char is small case the display reverse till a.
//                      if input is not a char then directly return. 
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    int iCnt=0;
  if(ch>='A'&& ch<='Z')
  {
      for(iCnt=ch; iCnt<='Z'; iCnt++)
      {
          printf("%c\t", iCnt);
          
      }
  }
  else if(ch>='a' && ch<='z')
  {
      for(iCnt=ch; iCnt>='a'; iCnt--)
      {
          printf("%c\t", iCnt);
      }
  }
  else{
      return; 
  }

}

int main()
{
    char ch = '\0';

    printf("Enter Character  :");
    scanf("%c", &ch); 

    Display(ch);

    return 0; 
}