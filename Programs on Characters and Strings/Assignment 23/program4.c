//////////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 4: Accept Character from user. And Check if it is special symbol or not
//                      (!,@,#,$,%,^,&,*)
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckSpecial(char ch)
{
    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch =='&' || ch =='*')
    {
        return true; 
    }
    else{
        return false; 
    }
}
 
int main()
{
    char ch = '\0';
    bool bRet; 

    printf("Enter Character  :");
    scanf("%c", &ch); 

   bRet =  CheckSpecial(ch);
   if(bRet == true)
   {
       printf("Entered character %c is a Special symbol.", ch);
   }
   else
   {
       printf("Not a Special Symbol.");
   }

    return 0; 
}