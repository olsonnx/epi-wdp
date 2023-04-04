#include <iostream>
#include <stdio.h>
using namespace std;

struct Dane {
    string imie;
    string nazwisko;
};

int main() {
    Dane cz;
    cz.imie="Jan";
    cz.nazwisko="Kowalski";

    cout<<cz.nazwisko<<" "<<cz.imie;
}