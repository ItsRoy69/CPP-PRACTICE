// Fibonacci series

#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Fibonacci Limit :";
    cin >> n;

    int a = 0;
    int b = 1;
    
    cout<<"Fibonacci Series : ";
    cout<<a <<" " <<b<<" ";

    for(int i = 1; i<=n; i++ ) {
        
        int nextNumber = a+b;
        cout<<nextNumber<<" ";

        a = b;
        b = nextNumber;
    }
    return 0;
}

// OUTPUT 
// ---------------
// Fibonacci Limit :5
// Fibonacci Series : 0 1 1 2 3 5 8