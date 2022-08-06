// Enter a number: 5
// * * * * * 
//  * * * *
//   * * *
//    * *
//     *

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
        int space = i-1;

        while (space)  //for space
        {
            cout << " "; // for counting the number
            space--;
        }

        int star=n-i+1;

        while (star)  //for star
        {
            cout << "*" << " "; // for counting the number
            star--;
        }

        cout << endl;
        i++;
    }
}