#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int inc(int x) {
    x++;
    return x;
}

int main() {
    int x;
    cin>>x;
    cout<<inc(x);
}
