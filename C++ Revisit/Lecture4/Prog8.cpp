// Enter a number: 5
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 

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
        while (j <= i)  //for column
        {
            cout << (i-j+1) << " "; // for counting the number
            j++;
        }
        cout << endl;

        i++;
    }
}