// Enter a number: 3
// 111
// 222
// 333

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
        int j = 1;
        while (j <= n) //for column
        {
            cout << i;
            j++;
        }
        cout << endl;

        i++;
    }
}