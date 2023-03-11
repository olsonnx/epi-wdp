#include <iostream>
#include <stdio.h>
using namespace std;
//rozwiazania nastepnych dwoch zadan sa giga leniwe i nie sa odporne na jakies pierdoly typu uzycie czegos innego niz litery
int main(){
    string tekst;
    cin>>tekst;
    for(int i=0; i<size(tekst); i++) {
        if(int(tekst[i])>96) {
            tekst[i]-=32;
        }
    }
    cout<<tekst;
}