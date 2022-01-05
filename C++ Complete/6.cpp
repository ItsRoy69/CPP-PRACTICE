//Grade System

#include<iostream>
using namespace std;

int main()
{
    int a;

    cout<<"Enter marks: "<<endl;
    cin>>a;

    if(a>90)
        cout<<"Excellent"<<endl;
    else if((a>80)&&(a<=90))
        cout<<"Good"<<endl;
    else if((a>70)&&(a<=80))
        cout<<"Fair"<<endl;
    else if((a>60)&&(a<=70))
        cout<<"Meets Expectations"<<endl;
    else
        cout<<"Below Par"<<endl;
}