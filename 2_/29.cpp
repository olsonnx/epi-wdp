#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {
 string tekst;
 fstream file;
 file.open("dane.txt", ios::in);
 cout<<file.rdbuf(); //w dokumencie jest inna metoda ale nie ma co wymyslac kola na nowo skoro to dziala i jest w domyslenj bibliotece cpp
 file.close();
}