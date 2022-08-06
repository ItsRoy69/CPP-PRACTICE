// Enter a number: 5
// 12345
// 12345
// 12345
// 12345
// 12345

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
            cout << j;
            j++;
        }
        cout << endl;

        i++;
    }
}