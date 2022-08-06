// Enter a number: 5
// E 
// D E
// C D E
// B C D E
// A B C D E


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
        char ch = 65 + n - i; // for counting the alphabets
        while (j <= i) //for column
        {   
            cout << ch << " "; 
            ch++;            
            j++;
        }
        cout << endl;

        i++;
    }
}