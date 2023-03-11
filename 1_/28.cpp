#include <iostream>
using namespace std;

//mozna to zrobic iteracyjnie lub rekurencyjnie, my zrobimy to iteracyjnie bo nie mamy jescze funkcji

int main() {
    int a, b;
    
    cout<<"Podaj dwie liczby: \n";
    cin>>a>>b;
     while(a!=b) {
       if(a>b)
           a-=b; //lub a = a - b;
       else
           b-=a; //lub b = b-a
     }
    cout<<"NWD: "<<a; //lub b
}