// Even Odd Program using function

#include<iostream>
using namespace std;

//1 -> Even
// 0 -> odd
bool isEven(int a) {
    //odd
    if(a % 2 != 0) {
        return 0;
    }
    else { //Even
        return 1;
    }

}

int main() {
    
    int num;
    cout<< "Print a number you want to check:  ";
    cin >> num;

    if(isEven(num)) {
        cout <<" Number is Even" <<endl;
    }
    else {
        cout<< " Number is Odd" <<endl;
    }

    return 0;
}