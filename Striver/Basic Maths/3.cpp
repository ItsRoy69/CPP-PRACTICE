// Write a program to determine if given number is palindrome or not. Print true if it is palindrome, false otherwise.

// Palindrome are the numbers for which reverse is exactly same as the original one. For eg. 121

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int rev = 0;
    int dup = n;
    while (n>0)
    {
        int ld = n%10;
        rev = rev*10 + ld;
        n = n/10;
        
    }if (dup == rev){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }    
    
}
