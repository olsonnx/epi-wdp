#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
int t[10], suma=0;
for(int i=0; i<10; i++) {
    cin>>t[i];
}

for(int i=0; i<10; i++) {
    suma+=t[i];
}

cout<<suma;
}