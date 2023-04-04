#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main(){
string imie;
cin>>imie;
int dl=imie.size(); //mozna tez to zrobic za pomoca size(imie); lub po prostu zrobic liczenie dlugosci while'em bo niektorym sie wykrzacza/ew. gdyby
if(imie[dl-1]=='a') {
    cout<<"imie zenskie";
} else {
    cout<<"imie meskie";
}
}