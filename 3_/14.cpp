#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int * kopia(int * x) {
 int * tab = new int[1007];
 for(int i=0; i<1007; i++) {
    tab[i]=x[i];
 }   
 return x;
}

int main() {
    int t[1007] = {1, 5, 6, 4, 3, 2, 7, 8};
    int * nowe=kopia(t);
    cout<<nowe[4];
}
