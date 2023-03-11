#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string input;
    cin >> input;
    ofstream out("dane.txt");
    out << input;
    out.close();
    return 0;
}