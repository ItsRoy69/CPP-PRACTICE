// Find the factorial of 2 numbers

#include<iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter 1st number: ";
    cin >> n1;
    cout << "Enter 2nd number: ";
    cin >> n2;    

    int fact1 = 1;
    for (int i = 2; i <= n1; i++)
    {
        fact1 = fact1 * i;
    }

    int fact2 = 1;
    for (int i = 2; i <= n2; i++)
    {
        fact2 = fact2 * i;
    }
    cout << "Factorial of " << n1 << " is " << fact1 << endl;
    cout << "Factorial of " << n2 << " is " << fact2 << endl;

    return 0;
}