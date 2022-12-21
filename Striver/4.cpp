#include <bits/stdc++.h>
using namespace std;

int main()
{
   int arr[6]; 
   
   cout << "Enter 6 numbers:";
   cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5];

   arr[3] = 10;
   cout << "value of arr[3]:" << arr[3] << "\n";
   return 0;
}