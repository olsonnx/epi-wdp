#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
//fajne zadanie
struct Game {
    string username;
    int best;
};

int main() {
    string nick="Ziomek";
    Game gracz[1000];
    for(int i=0; i<10; i++) {
        gracz[i].username = nick+" "+to_string(i);
        gracz[i].best = i*1000;
    }

    for(int i=0; i<10; i++) {
        cout<<"NICK: "<<gracz[i].username<<" PUNKTY: "<<gracz[i].best<<"\n";
    }
}