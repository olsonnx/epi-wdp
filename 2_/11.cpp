#include <iostream>
#include <stdio.h>
using namespace std;



int main() {
int x;
cin>>x;
int y=x;
switch (y){
    case 50 ... INT_MAX: cout<<"jestes stary"; break; // dodanie "..." pozwala wziac z przedzialu, niby wywala blad ale w sumie to dziala wiec tbw
    case 0 ... 20: cout<<"jestes mlody"; break;
    default: cout<<"jestes w srednim wieku"; break;
}   

}