// Enter a number: 5
// A B C D E 
// A B C D E
// A B C D E
// A B C D E
// A B C D E

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
            char ch = 65 + j - 1; // for counting the character
            cout << ch << " ";
                
            j++;
        }

        cout << endl;
        i++;
    }
}