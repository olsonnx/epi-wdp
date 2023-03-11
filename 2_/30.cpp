#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {
int t[100];
for(int i=0; i<6; i++) {
    cin>>t[i];
}

ofstream file;
file.open("dane.txt");

if(file.fail()) {
    cout<<"blad w otwarciu pliku!";
} else {
    for(int i=0; i<6; i++) {
        file << t[i] <<"\n";
    }
    cout<<"wyeksportowano liczby";
}
file.close();
}