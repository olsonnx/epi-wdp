#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int maks(int * x, int siz) {
    int mx=x[0];
    for(int i=0; i<siz; i++){
        if (mx<x[i]) {
            mx=x[i];
        }
    }
    return mx;
}

int main() {
    int tab[100007] = {1, 2, 3};
    int sss=10;
    cout<<maks(tab, sss);
}
