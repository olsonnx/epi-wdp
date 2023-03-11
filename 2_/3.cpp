#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
int t[10007];
int x;
for(int i=0; i<10; i++) {
    cin>>t[i];
}
x=t[0];
for(int i=0; i<10; i++) {
    if(t[i]<x) {
        x=t[i];
    }
}
cout<<x;
}