#include <iostream>
using namespace std;

int main ( ){

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    int i = 1;
    while (i <= n){
        cout << i << endl;
        sum= sum+i;
        i++;
    }
    cout << "Sum is " <<sum<< endl;
    
}