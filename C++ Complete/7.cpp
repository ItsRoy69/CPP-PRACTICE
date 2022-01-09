//A number is prime or not

#include <iostream>
using namespace std;

int main()
{
    int n,factor=0;

    cout << "Enter a number: ";
    cin >> n;

    for(int div = 1; div <= n; div++)
    {
        if(n % div == 0)
        {
            factor++;
        }
    }
    if(factor == 2)
    {
        cout << "The number is prime.";
    }
    else
    {
        cout << "The number is not prime.";
    }

}