#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main(){
string imie;
cin>>imie;
int dl=size(imie);
if(imie[dl-1]=='a') {
    cout<<"imie zenskie";
} else {
    cout<<"imie meskie";
}
}