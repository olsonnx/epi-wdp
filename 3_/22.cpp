#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

struct Punkt{
    int x;
    int y;
};

void wypiszpkt(Punkt punktpod) {
    cout<<punktpod.x<<'\n';
    cout<<punktpod.y;
}

int main() {
    Punkt punktx;
    punktx.x=54;
    punktx.y=34;
    wypiszpkt(punktx);
}
