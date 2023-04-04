#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
using namespace std;

int * kopia(int * x, int g, int sz) {
    int * tab = new int[sz+1];
    for(int i=0; i<sz; i++) {
        tab[i]=x[i];
    }
    tab[sz+1]=g;
    for(int i=0; i<sz+1; ++i) {
        for(int j=0; j<sz+1-i; ++j) {
                if (tab[i]<tab[i+1]){
                    int temp = tab[i];
                    tab[i]=tab[i+1];
                    tab[i+1]=temp;
                }
        }
    }
    for(int i=0; i<sz+1; i++) {
        cout<<tab[i]<<" ";
    }
    return tab;
}

int main() {
    int x;
    cout<<"Podaj ile: ";
    cin>>x;
    cout<<"Podaj wartosci w tablicy: ";
    int * tabg = new int[x+1];
    int wartosc;
    for(int i=0; i<=x; i++) {
        cin>>wartosc;
        tabg[i]=wartosc;
    }
    cout<<"Podaj liczbe do dopisania: ";
    int gg;
    cin>>gg;
    kopia(tabg, gg, x);
    return 0;
}
