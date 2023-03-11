#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    string tekst;
    cin>>tekst;
    for(int i=0; i<size(tekst); i++) {
        if(int(tekst[i])<96) {
            tekst[i]+=32;
        }
        else if(int(tekst[i])>96) {
            tekst[i]-=32;
        }
    }
    cout<<tekst;
}