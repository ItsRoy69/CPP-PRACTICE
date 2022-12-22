// Pass by reference

#include <bits/stdc++.h>
using namespace std;

// pass by reference = here the address of the variable goes from main to doSomething and then the value at that address is changed in doSomething and then the value at that address is returned to main
// & is used to pass by reference
void doSomething(string &s)
{
    s[0] = 't';
    cout << s << endl;
}
int main()
{
    string s = "roy";
    doSomething(s);
    cout << s << endl;
    return 0;
}