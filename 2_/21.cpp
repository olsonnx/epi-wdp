#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    string tekst;
    cin>>tekst;
    for(int i=size(tekst); i>=size(tekst)/2; i--) {
        tekst[i]='\0';
    }
    cout<<tekst;
}