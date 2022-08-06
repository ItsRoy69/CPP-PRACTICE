// Enter a number: 5
// * * * * * 
// * * * *
// * * *
// * *
// *

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
        int j = n-i+1;
        while (j)  //for column
        {
            cout << "*" << " "; // for counting the number
            j--;
        }
        cout << endl;

        i++;
    }
}