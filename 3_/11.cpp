#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int dlugosc(string tekst) {
    int i=0;
    while(tekst[i]!='\0'){
        i++;
    }
    return i;
}

int main() {
    string txt;
    cin>>txt;
    cout<<dlugosc(txt);
}
