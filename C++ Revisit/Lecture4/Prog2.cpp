// Enter a number: 5
// 54321
// 54321
// 54321
// 54321
// 54321

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
            cout << n-j+1;
            j++;
        }
        cout << endl;

        i++;
    }
}