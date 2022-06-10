////////////////////////////////////////////////////////////////////////////
// Problem Statement 2 : Accept Character fro user and check weather its a 
//                      Capital Alphabet  or not. (A-Z) 
////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<stdbool.h>
using namespace std; 

bool ChekAlpha(char ch )
{
    if(ch>='A' && ch<='Z')
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

    bRet = ChekAlpha(ch);
    if(bRet == true)
    {
        cout<<"Entered character is an Capital Alphabet"<<"\n";
    }
    else
    {
        cout<<"Entered character is NOT an Capital Aplhabet";
    }

    return 0;
}

