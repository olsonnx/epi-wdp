#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int mini(int * x, int siz, int szk) {
    int mx=x[0];
    bool jest=false;
    for(int i=0; i<siz; i++){
        if (x[i]==szk) {
            jest=true;
        }
    }
    return jest;
}

int main() {
    int tab[100007] = {3, 2, 3, 6, 9, 123};
    int sss=3;
    int szukana;
    cin>>szukana;
    cout<<mini(tab, sss, szukana);
}
