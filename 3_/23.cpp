#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

struct Punkt{
    int x;
    int y;
};

void podajpkt(Punkt punktpod, int mx, int my) {
    int * px=punktpod.x;
    int * py=punktpod.y;
}

int main() {
    Punkt punktx;
    int x,y;
    cin>>x>>y;
    podajpkt(punktx, x, y);
}
