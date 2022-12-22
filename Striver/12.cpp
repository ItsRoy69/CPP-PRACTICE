//Take input of two numbers and print their sum.

#include <bits/stdc++.h>
using namespace std;

int add(int n1, int n2)
{
    int n3 = n1 + n2;
    return n3;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    int res = add(n1, n2);
    cout << res;

    return 0;
}