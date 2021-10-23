// If positive then loop continuous orelse if negative then loop exits

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Print a number that can be positive or negative :"<<endl;
    cin>>n;

    while(n>0)
    {
        cout<<n<<endl;
        cin>>n;
    }

    return 0;
}