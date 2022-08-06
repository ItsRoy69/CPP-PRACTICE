// Enter a number: 5
// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 
// 5 6 7 8 9 

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
        int value = i;
        while (j <= i)  //for column
        {
            cout << value << " "; // for counting the number
            value++;
            j++;
        }
        cout << endl;

        i++;
    }
}