// Enter a number: 5
// 1 
// 2 3
// 4 5 6 
// 7 8 9 10
// 11 12 13 14 15

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;
    int count = 1;

    while (i <= n)  //for row
    {
        int j = 1;
        while (j <= i)  //for column
        {
            cout << count << " "; // for counting the number
            count = count + 1; 
            j++;
        }
        cout << endl;

        i++;
    }
}