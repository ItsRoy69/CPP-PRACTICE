//Break & Continue
//WAP a series that'll print all the numbers from 1 to 100 except those numbers which are divisible by 3.


#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 100; i++)
    {
        if(i%3==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}