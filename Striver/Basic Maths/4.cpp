// Write a Program to determine if the given number is Armstrong number or not. Print true if number is armstrong, otherwise print false.

//An Armstrong number is a number (with digits n) such that the sum of its digits raised to nth power is equal to the number itself.

//For example, 
// 371, as 3^3 + 7^3 + 1^3 = 371
// 1634, as 1^4 + 6^4 + 3^4 + 4^4 = 1634 

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    int dup = n;
    while (n>0)
    {
        int ld = n%10;
        sum = sum + (ld * ld * ld);
        n = n/10;
        
    }if (sum == dup)
    {
        cout << "true" << endl;
    }
    else
       {
        cout << "false" << endl;
    }         
}
