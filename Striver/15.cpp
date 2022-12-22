// Pass by value in string

#include <bits/stdc++.h>
using namespace std;

// pass by value = here a copy goes from main to doSomething and then the copy is changed in doSomething and then the copy is returned to main
void doSomething(string s)
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