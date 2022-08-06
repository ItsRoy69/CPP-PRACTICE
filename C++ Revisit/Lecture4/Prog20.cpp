// Enter a number: 5
//     *
//    **
//   ***
//  ****
// *****


#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number: ";
    cin>>n;

    int i = 1;

    while(i <= n) //for row
    { 
        //Print karo space (1st triangle)
        int space = n - i ;
        while(space) {
            cout<<" ";
            space = space - 1;
        }

        //print 2nd triangle 
        int j = 1;
        while(j <= i ) {
            cout<<"*";
            j = j + 1;
        }
      
        cout<<endl;
        i = i + 1;
    }

    return 0;
}