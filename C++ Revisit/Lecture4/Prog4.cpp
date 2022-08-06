// Enter a number: 5
// *
// **
// ***
// ****
// *****

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;

    while (i <= n)  //for row
    {
        int j = 1;
        while (j <= i)  //for column
        {
            cout << "*";
            j++;
        }
        cout << endl;

        i++;
    }
}