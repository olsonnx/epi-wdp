#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    int x, suma=0;
    cin>>x;
    for(int i=1; i<x; i++) {
        if(x%i==0) {
            suma+=i;
        }
    }
    if(suma==x) {
        cout<<"liczba doskonala";
    } else {
        cout<<"liczba nie jest doskonala";
    }
}