![image](https://user-images.githubusercontent.com/78967360/210269239-31d9b9bd-021f-4a79-9734-ad3da8c6f2d6.png)

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i <n; i++)
    {
        //Space
        for (int j = 0; j < n-i-1; j++)
        {

            cout << " ";
        }
        //Star
        for (int j = 0; j < 2*i+1 ; j++)
        {

            cout << "*";
        }
        //Space
        for (int j = 0; j < n-i-1; j++)
        {

            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern(n);
}