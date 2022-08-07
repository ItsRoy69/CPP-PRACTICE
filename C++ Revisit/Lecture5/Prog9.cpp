// Variable Scoping

#include<iostream>
using namespace std;

int main() {

    int n = 5;
    cout<< n <<endl;

    if(true) {
       int n = 7;  //this value is stored in this if block so it won't be affected by the outside value
       cout<< n <<endl;
    }

    cout<< n <<endl; //this value is affected by the outside value

    return 0;
}