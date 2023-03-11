#include <iostream>
#include <stdio.h>
using namespace std;

//kwadrat moze miec tylko jeden rozmiar... wiec pominiemy sobie te inne "rozmiary"

int main() {

int x;
cout<<"Podaj wymiary kwadratu: ";
cin>>x;
for(int i=0; i<x; i++) {
    for(int j=0; j<x; j++) {
        cout<<"X";
    }
    cout<<"\n";
}

}