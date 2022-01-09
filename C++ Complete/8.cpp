//Print prime numbers from the numbers entered by the user

#include<iostream>
using namespace std;

int main()
{
   int t;

   cout<<"Enter the total no. number of times you'll enter the numbers: ";
   cin>>t;

   for(int i=0;i<t;i++)
   {
       int n,factor=0;

       cout<<"Enter a number: ";
       cin>>n;

       for(int div=1;div<=n;div++)
       {
           if(n%div==0)
           {
               factor++;
           }
       }
       if(factor==2)
       {
           cout<<"The number is prime."<<endl;
       }
       else
       {
           cout<<"The number is not prime."<<endl;
       }
   }
}



   
   