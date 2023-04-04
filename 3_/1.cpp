#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int * tab = new int[10000];
    for(int i=0; i<10000; i++) {
        tab[i]=i;
    }
    cout<<tab[4];
}