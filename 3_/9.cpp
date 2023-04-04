#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int mini(int * x, int siz) {
    int mx=x[0];
    int indeks;
    for(int i=0; i<siz; i++){
        if (mx>x[i]) {
            indeks=i;
        }
    }
    return indeks;
}

int main() {
    int tab[100007] = {3, 2, 3};
    int sss=3;
    cout<<mini(tab, sss);
}
