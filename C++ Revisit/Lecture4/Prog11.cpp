// Enter a number: 5
// A A A A A 
// B B B B B
// C C C C C
// D D D D D
// E E E E E

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

        while (j <= n)  //for column
        {
            char ch = 65 + i - 1; // for counting the character
            cout << ch << " ";

            j++;
        }

        cout << endl;
        i++;
    }
}