#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

//nie jest sprecyzowane o jaka tablice chodzi wiec wzialem tamta z poprzedniego zadania

int main() {
int tab[11][11];
float suma=0; //robimy floatem bo inaczej srednia se umiera i sie zaokragla
float srednia=0.00;
int ile=0;
for(int i=1; i<=10; i++) {
    for(int j=1; j<=10; j++) {
        tab[i][j]=i*j;
    }
}
for(int i=1; i<=10; i++) {
    for(int j=1; j<=10; j++) {
        suma+=tab[i][j];
        ile++;
    }
}

srednia=suma/ile;
cout<<setprecision(5)<<"srednia: "<<srednia<<" liczb w tablicy: "<<ile<<"\n";
cout<<"rozmiar tablicy: "<<sizeof(tab); //polecialem sizeof bo nie wiem o jaki rozmiar tablicy mu chodzilo (w sensie czy bajty czy liczba elementow)

}