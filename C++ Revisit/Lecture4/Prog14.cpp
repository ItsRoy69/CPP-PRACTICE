// Enter a number: 3
// A B C 
// B C D 
// C D E

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;

    while (i <= n) //for row
    {
        int j = 1;
        while (j <= n) //for column
        {   
            char ch = 65 + i + j - 2; // for counting the alphabets
            cout << ch << " "; 
            ch++;            
            j++;
        }
        cout << endl;

        i++;
    }
}