////////////////////////////////////////////////////////////////////////////
// Problem Statement 3 : Accept Character fro user and check weather its a 
//                      Digit or not. (0-9) 
////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<stdbool.h>
using namespace std; 

bool ChekDigit(char ch )
{
    if(ch>='0' && ch<='9')
    {
        return true; 
    }
    else{
        return false;
    }

}

int main ()
{
    char ch = '\0';
    bool bRet; 

    cout<<"Enter Character :";
    cin>>ch;

    bRet = ChekDigit(ch);
    if(bRet == true)
    {
        cout<<"Entered character is a Digit"<<"\n";
    }
    else
    {
        cout<<"Entered character is NOT a Digit";
    }

    return 0;
}

