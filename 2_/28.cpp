#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {
 string tekst;
 fstream file;
 file.open("dane.txt", ios::in);
 cin>>tekst;
 file.close();
}