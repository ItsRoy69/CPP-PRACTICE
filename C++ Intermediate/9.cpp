//Switch Case - Type 1

#include<iostream>
using namespace std;

int main()
{
    char button;
    cout<<"Input a character: ";
    cin>>button;

    if(button=='a')
    {
        cout<<"Hello"<<endl;
    }
    else if(button=='b')
    {
        cout<<"Namaste"<<endl;
    }
    else if(button=='c')
    {
        cout<<"Salute"<<endl;
    }
    else 
    {
        cout<<"Still Learning"<<endl;
    }
    
    return 0;
}