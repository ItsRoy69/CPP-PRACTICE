//Switch Case using Switch Statement. Type - 2

#include<iostream>
using namespace std;

int main()
{
    char button;
    cout<<"Input a character: ";
    cin>>button;
    
    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Namaste"<<endl;
        break;
    case 'c':
        cout<<"Salute"<<endl;
        break;
       
    default:
    cout<<"Still Learning"<<endl;
        break;
    }
    return 0;
}