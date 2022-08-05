#include <iostream>
using namespace std;

int main()
{
    int p;
    cout << "Enter a number: ";
    cin >> p;

    int i = 2;
     while (i < p)
     {
        if (p % i == 0)
        {
            cout << "Not a prime number for "<< i << endl;
        }
        else
        {
            cout << "Prime number for "<< i  << endl;
        }
        i++;
     }
}