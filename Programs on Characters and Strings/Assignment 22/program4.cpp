////////////////////////////////////////////////////////////////////////////
// Problem Statement 4 : Accept Character fro user and check weather its a 
//                      Small case Alphabet or not. (a-z) 
////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<stdbool.h>
using namespace std; 

bool ChekAlphaSmall(char ch )
{
    if(ch>='a' && ch<='z')
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

    bRet = ChekAlphaSmall(ch);
    if(bRet == true)
    {
        cout<<"Entered character is a small case"<<"\n";
    }
    else
    {
        cout<<"Entered character is NOT a small case";
    }

    return 0;
}

