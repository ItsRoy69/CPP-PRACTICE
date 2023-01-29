// Print 1 to N using backtracking

#include <iostream>
using namespace std;

void print_numbers(int current, int n) {
    if (current > n) {
        return;
    }
    cout << current << " ";
    print_numbers(current + 1, n);
}

int main() {
    int n = 10;
    print_numbers(1, n);
    return 0;
}
