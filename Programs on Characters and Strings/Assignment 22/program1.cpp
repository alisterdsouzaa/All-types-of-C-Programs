////////////////////////////////////////////////////////////////////////////
// Problem Statement 1 : Accept Character fro user and check weather its a 
//                       Alphabet  or not. (A-Z & a-z) 
////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<stdbool.h>
using namespace std; 

bool ChekAlpha(char ch )
{
    if(ch>='a'&& ch<='z' || ch>='A' && ch<='Z')
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
        cout<<"Entered character is an Alphabet"<<"\n";
    }
    else
    {
        cout<<"Entered character is NOT an Aplhabet";
    }

    return 0;
}

