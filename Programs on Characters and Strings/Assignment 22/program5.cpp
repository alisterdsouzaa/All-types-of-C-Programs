//////////////////////////////////////////////////////////////////////////////////////////////
// Problem Statement 5 : Accept Division of a student from user and depends on the division
//                        display exam timing. There are four divisions in school as A ,B, C, D. 
//                      Exam of division A is at 7AM. B at 8:30AM, C at 9:20 AM, D at 10:30 AM.
//                      (Application Should be case insensitive)
///////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std; 

void Division(char ch)
{
        switch (ch)
        {
        case 'a':
            cout<<"Exam of divison A is at 7 AM"<<endl;
            break;

        case 'A':
            cout<<"Exam of divison A is at 7 AM"<<endl;
            break;
        
        case 'b':
            cout<<"Exam of divison B is at 8:30 AM"<<endl;
            break;

        case 'B':
            cout<<"Exam of divison B is at 8:30 AM"<<endl;
            break;   

        case 'c':
            cout<<"Exam of division C is at 9:20 AM"<<endl;
            break;

        case 'C': 
            cout<<"Exam of division C is at 9:20 Am"<<endl;
            break;

        case 'D': 
            cout<<"exam of division D is at 10:30"<<endl;
            break;

        case 'd':
            cout<<"exam of division D is at 10:30"<<endl; 
            break;    
        
        default:
            cout<<"Invalid Division"<<endl;
            break;
        }
    }

int main ()
{
    char division = '\0';

    cout<<"Enter your division"<<endl;
    cin>>division; 

    Division(division);

    return 0; 
}