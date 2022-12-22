// Pass by value in int

#include <bits/stdc++.h>
using namespace std;

// pass by value = here a copy goes from main to doSomething and then the copy is changed in doSomething and then the copy is returned to main
void doSomething(int num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}
int main()
{
    int num = 10;
    doSomething(num);
    cout << num << endl;
    return 0;
}