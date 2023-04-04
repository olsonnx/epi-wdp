#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

bool dlugosc(string tekst, string tekst2) {
    int i=0;
    bool tks=true;
    while(tekst[i]!='\0' || tekst2[i]!='\0'){
        if(tekst[i]!=tekst2[i]){
            tks=false;
            return tks;
        }
        i++;
    }
    return tks;
}

int main() {
    string txt, txt2;
    cin>>txt>>txt2;
    cout<<dlugosc(txt, txt2);
}
