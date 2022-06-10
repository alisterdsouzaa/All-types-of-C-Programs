///////////////////////////////////////////////////////////////////////////////////////////
// Problem statement 4 : Accept a string from the user and accept one character. return
//                      index of that character's last occurence. 
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int LastOcc(char *str, char c)
{
    int iLastOcc = 0, iIndex =0;

   while(*str != '\0')
   {
        if(*str == c)
        {
            iLastOcc = iIndex;
        }
        str++; 
        iIndex++; 
   }
    
   return iLastOcc;
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

    iRet = LastOcc(str, ch);
    if(iRet == 0) 
    {
        printf("Character in not is string.");
    }
    else
    {
    printf("Index of Last occurence of char | %c | is  : %d", ch, iRet);
    }
    return 0; 
}