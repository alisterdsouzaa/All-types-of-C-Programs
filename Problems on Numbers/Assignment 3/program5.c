/////////////////////////////////////////////////////////////////////////////
// Problem Statement 1 : Program which accepts char form user and returns if 
//                      . the character is a vowel or not.
/////////////////////////////////////////////////////////////////////////////
// a e i o u
#include<stdio.h>
 typedef int bool;

 #define TRUE 1
 #define FALSE 0

 bool ChkValue (char cValue)
 {
     if(cValue == 'a'|| cValue == 'e'|| cValue =='i'|| cValue =='o'|| cValue=='u'
            || cValue=='A'||cValue=='E'||cValue=='I'||cValue=='O'||cValue=='U')
     {
         return TRUE;
     }
     else{
         return FALSE; 
     }
     
 }

int main(){
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter Character :");
    scanf("%c", &cValue);

    bRet = ChkValue(cValue);
    if(bRet== 1)
    {
        printf("It is a vovel.");
    }
    else
    {
        printf("It is not a vowel.");
    }

    return 0;
}
