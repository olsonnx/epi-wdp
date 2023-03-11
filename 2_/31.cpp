#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {
int t[100];

fstream file;
file.open("dane.txt");

if(file.fail()) {
    cout<<"blad w otwarciu pliku!";
} else {
    int i=0;
    while(true){
        file>>t[i];
        i++;
        if(file.eof()){
            break;
        }
    }
    cout<<"zaimportowano liczby\n";
}
file.close();

for(int i=0; i<6; i++) {
    cout<<t[i]<<" ";
}
}