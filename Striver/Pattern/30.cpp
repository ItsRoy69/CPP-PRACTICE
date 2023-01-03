#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int num = 1;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row * 2 - 1; col++)
        {
            if (col % 2 == 1)
            {
                cout << num;
                num++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    };
}

int main()
{
    int n;
    cin >> n;
    pattern(n);
}