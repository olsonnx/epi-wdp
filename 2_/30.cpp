#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {
int t[100];
for(int i=0; i<6; i++) {
    cin>>t[i];
}

ofstream fout;
fout.open("dane.txt");

if(fout.fail()) {
    cout<<"blad w otwarciu pliku!";
} else {
    for(int i=0; i<6; i++) {
        fout << t[i] <<"\n";
    }
    cout<<"wyeksportowano liczby";
}
fout.close();
}