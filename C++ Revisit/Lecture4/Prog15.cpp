// Enter a number: 3
// A  
// B B 
// C C C

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
        while (j <= i) //for column
        {   
            char ch = 65 + i - 1 ; // for counting the alphabets
            cout << ch << " "; 
            ch++;            
            j++;
        }
        cout << endl;

        i++;
    }
}