#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int fib(int x) {
    int t[10000];
    t[0]=0;
    t[1]=1;
    for(int i=2; i<=x; i++){
        t[i]=t[i-1]+t[i-2];
    }
    return t[x];
}

int main() {
    cout<<fib(19);
}
