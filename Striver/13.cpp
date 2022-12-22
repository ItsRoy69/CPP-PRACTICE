// Take input of two numbers and print their min.

#include <bits/stdc++.h>
using namespace std;

int min(int n1, int n2)
{
    if (n1 < n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    int minimum = min(n1, n2);
    cout << minimum;

    return 0;
}