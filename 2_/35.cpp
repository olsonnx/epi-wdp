#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    string line, nazwa1, nazwa2;
    cin>>nazwa1>>nazwa2;
    ifstream ini_file; 
    ofstream out_file;
    ini_file.open(nazwa1.c_str());
    out_file.open(nazwa2.c_str());
    if (ini_file && out_file) {
  
        while (getline(ini_file, line)) {
            out_file << line << "\n";
        }
        cout << "kopia zakonczona \n";
    }
    else {
        cout<<"nie mozna odczytac pliku!";
    }
    
    ini_file.close();
    out_file.close();
    return 0;
}