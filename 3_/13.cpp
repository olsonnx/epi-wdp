#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

bool takiesame(int * x, int * y) {
    int i=0;
    bool tks=true;
    while(x[i]!='\0' || y[i]!='\0'){
        if(x[i]!=y[i]){
            tks=false;
            return tks;
        }
        i++;
    }
    return tks;
}

int main() {
    int t1[10007] = {1, 2, 3, 4};
    int t2[10007] = {1, 2, 3, 4, 5};
    cout<<takiesame(t1, t2);
}
