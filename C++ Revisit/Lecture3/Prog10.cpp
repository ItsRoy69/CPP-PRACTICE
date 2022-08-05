// Enter a number: 4
// 1111
// 222
// 33
// 4

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;

    while (i <= n) //for row
    {
        int j = i;
        while (j <= n) //for column
        {
            cout << i;
            j++;
        }
        cout << endl;

        i++;
    }
}