#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
char s[1000];
int dl=1; //zaczynamy od 1 bo tak
cout<<"wprowadz slowo: ";
cin>>s;
for(int i = 1; s[i] != '\0'; i++){
dl++;
}
cout<<dl;
}