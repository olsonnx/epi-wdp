#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
using namespace std;

//drukarka hp nie mam juz sily do tej ***** - wskazniki to syf

int * kopia(int * x, int g) {
 int * tab = new int[1007];
 int temp=0;
  for(int i=0; i<=1007; i++) {
    tab[i]=0;
 }
 for(int i=0; i<=1007; i++) {
    tab[i]=x[i];
 }
 tab[1007]=g;
 bool warunek=true;
    while(warunek==true) {
        for(int i=0; i<=1007; i++){
            warunek=false;
            if(tab[i]>=tab[i+1]){
                temp=tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=temp;
                warunek=true;
            }
        }
    }
 return tab;
}

int main() {
    int t[1007] = {1, 3, 2, 4, 5, 6, 7, 9};
    int * nowe=kopia(t, 8);
    for(int i=0; i<10; i++) {
        cout<<nowe[i];
    }
    cout<<nowe[1007];
    return 0;
}
