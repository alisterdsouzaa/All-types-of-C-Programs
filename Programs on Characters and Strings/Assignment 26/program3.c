///////////////////////////////////////////////////////////////////////////////////////////
// Problem statement 3 : Accept a string from the user and accept one character. return
//                      index of that character's first occurence. 
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FirstOcc(char *ch, char c)
{
    int iFirstOcc = -1;
    int iIndex =0;
   while(*ch != '\0') 
   {
       iIndex++;
       if(*ch == c)
       {
           iFirstOcc = iIndex -1;
           break;
       }
       ch++;
   }
   return iFirstOcc;
}

int main ()
{
    char str[20];
    char ch = '\0';
    int iRet = 0;

    puts("Enter String : ");
    gets(str); 

    puts("Enter Character :");
    scanf("%c", &ch );

    iRet = FirstOcc(str, ch); 
    printf("Index of first occurence is  : %d", iRet);

    return 0; 
}