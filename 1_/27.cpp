#include <iostream>
using namespace std;

int main() {
int x,y,z;
cout<<"podaj x i y: ";
cin>>x>>y;
cout<<"wartosc x: "<<x<<" wartosc y: "<<y<<"\n";
z=x;
x=y;
y=z;
cout<<"wartosc x: "<<x<<" wartosc y: "<<y;
}