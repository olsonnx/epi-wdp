#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    string jeden;
    cin>>jeden;
    for(int i=0; i<size(jeden); i++) {
        jeden[i]='*';
    }
    cout<<jeden;
}