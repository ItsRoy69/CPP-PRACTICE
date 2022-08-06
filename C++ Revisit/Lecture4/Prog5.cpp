// Enter a number: 5
// 1
// 22
// 333
// 4444
// 55555

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
            cout << i;
            j++;
        }
        cout << endl;

        i++;
    }
}