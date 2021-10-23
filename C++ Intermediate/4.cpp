//For loop to print the sum till n

#include<iostream>
using namespace std;

int main()
{
    int n;
    
    cout<<"Enter a Number till which it will get sum"<<endl;
    cin>>n;

    int sum=0;
    for(int counter=1;counter<=n;counter++)
    {
        sum=sum+counter;
    }

    cout<<sum<<endl;
    return 0;
}