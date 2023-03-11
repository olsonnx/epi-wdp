#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {
 string tekst;
 fstream file;
 cin>>tekst;
 int c=0;
 file.open(tekst.c_str());
  if(file.fail()) {
    cout<<"blad w otwarciu pliku!";
 } else {
    char znak;
    while(file.get(znak)){
        if(file.eof()){
            break;
        } else {
            if(c%2==0) {
                cout<<znak;
            }
            c++;
    }
 }
 file.close();
}
}