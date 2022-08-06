// Enter a number: 5
// A B C D E 
// F G H I J
// K L M N O
// P Q R S T
// U V W X Y

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 1;
    char ch = 65;

    while (i <= n) //for row
    {
        int j = 1;
        while (j <= n) //for column
        {   
            cout << ch << " "; // for counting the alphabets
            ch++;            
            j++;
        }
        cout << endl;

        i++;
    }
}