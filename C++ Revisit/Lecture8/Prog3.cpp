#include<iostream>
using namespace std;

int main() {
    int n;
    cout<< "Enter amount" <<endl;
    cin>> n;
    int sau, pachaas, bees, ek;

    
    switch(1){
        case 1:sau= n/100;
        cout<< "Sau ke "  << sau << " Note chahiye" << endl;
        n= n%100;

        case 2: pachaas= n/50;
        cout<< "Pachaas ke " << pachaas << " Note chahiye" << endl;
        n= n%50;

        case 3: bees= n/20;
        cout<< "Bees ke " << bees << " Note chahiye" << endl;
        n=n%20;

        case 4: ek = n/1;
        cout<< "Ek ke " << ek << " Note chahiye" << endl;

    }
}