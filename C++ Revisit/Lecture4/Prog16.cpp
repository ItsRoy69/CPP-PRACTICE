// Enter a number: 3
// A  
// B C
// D E F

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;
    char ch = 65;

    while (i <= n)  //for row
    {
        int j = 1;
        while (j <= i)  //for column
        {
            cout << ch << " "; 
            ch++; 
            j++;
        }
        cout << endl;

        i++;
    }
}