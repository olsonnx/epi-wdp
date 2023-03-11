#include <iostream>
#include <math.h>
using namespace std;

//

int main() {
    int x, y=2;
    cin>>x;
    if(x==1 || x==0) { //dodajemy wyjatki
        cout<<"liczba nie jest pierwsza";
        return 0;
    }
    while(y<sqrt(x)) { //liczymy do pierwiastka
        if(x%y==0) {
            cout<<"liczba nie jest pierwsza";
            return 0;
        }
        y++;
    }
cout<<"liczba jest pierwsza";

}