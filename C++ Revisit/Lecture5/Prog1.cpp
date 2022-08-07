// Type of bitwise operators


#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout << "a&b : " << (a&b) << endl;
    cout << "a|b : " << (a|b) << endl;
    cout << "a^b : " << (a^b) << endl;
    cout << "~a : " << (~a) << endl;

}

// Output
// ------

// a&b : 4
// a|b : 6
// a^b : 2
// ~a : -5