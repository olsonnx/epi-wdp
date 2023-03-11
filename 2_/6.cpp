#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
int t[10007];
for(int i=0; i<6; i++) {
    cin>>t[i];
}
for(int i=0; i<6; i++) {
    if(t[i]%2==0){
        t[i]=0;
    }
    cout<<t[i];
}
}