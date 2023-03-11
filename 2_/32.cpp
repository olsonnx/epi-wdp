#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {
    int c=0;
 string tekst;
 fstream file;
  cin>>tekst;
 file.open(tekst.c_str());
 if(file.fail()) {
    cout<<"blad w otwarciu pliku!";
 } else { 
    char zlicz;
    while(file.get(zlicz)) {
        if(file.eof()){
            break;
        } else {
            c++;
        }

    }
 }
 cout<<c;
 file.close();
}