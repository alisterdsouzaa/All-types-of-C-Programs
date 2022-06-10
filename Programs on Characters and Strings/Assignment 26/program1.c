///////////////////////////////////////////////////////////////////////////////////////////
// Problem statement 1 : Accept a string from the user and accept one character. check if
//                      if the character is present in the string or not. 
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckCharacter(char *ch, char c)
{
    bool flag = false; 
    while(*ch != '\0')
    {
        if(*ch == c)
        {
            flag = true; 
            break;
        }
        ch++;
    }
    return flag; 
}

int main ()
{
    char str[20];
    char ch = '\0';
    bool bRet;

    puts("Enter String : ");
    gets(str); 

    puts("Enter Character :");
    scanf("%c", &ch );

    bRet = CheckCharacter(str, ch); 
    if(bRet == true)
    {
        printf("Entered character \" %c \" is present in stirng.", ch);
    }
    else
    {
        printf("Character in not present in enterd Stirng.");
    }


}