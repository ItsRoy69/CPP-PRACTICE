// Power code with function

#include<iostream>
using namespace std;

int power(int num1, int num2) {
    
    //cout << a <<endl;

    int ans = 1;

    for(int i = 1; i <= num2; i++) {
        ans = ans * num1;
    }

    return ans;
}
int main()
{
    int c , d;

    cout<< "Value of c:  ";
    cin >> c;

    cout<< "Value of b which is power of c:  ";
    cin >> d;

    int answer = power(c,d);
    cout << " Answer is " << answer << endl;

    return 0;
}