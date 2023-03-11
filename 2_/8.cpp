#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
int tab[100][100];
int suma=0;
for(int i=1; i<=10; i++) {
    for(int j=1; j<=10; j++) {
        tab[i][j]=i*j;
    }
}
for(int i=1; i<=10; i++) {
    for(int j=1; j<=10; j++) {
        suma+=tab[i][j];
    }
}
cout<<suma;
}

//mozna to zrobic tabliczke do 100 jak sie jest tryhardem tylko trzeba zmienic zakres tablicy odpowiednio duzy