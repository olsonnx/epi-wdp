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
    while(true){
        if(file.eof()){
            break;
        } else {
            getline(file, tekst);
            c++;
    }
 }
 file.close();
}
cout<<c;
}