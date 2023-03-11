#include <iostream>
using namespace std;

//mozna sie bawic z uzyciem wbudowanej funkcji min ale bedziemy purystami, pewnie da sie lepiej to napisac btw

int main() {
int a, b, c;
cin>>a>>b>>c;
if(a>b && a>c) {
    if(a<=b+c){
        cout<<"da sie zbudowac trojkat";
    } else {
        cout<<"nie da sie";
    }
} else if (b>a && b>c) {
    if(b<=a+c){
        cout<<"da sie zbudowac trojkat";
    } else {
        cout<<"nie da sie";
    }
} else if (c>a && c>b) {
    if(c<=a+b){
        cout<<"da sie zbudowac trojkat";
    } else {
        cout<<"nie da sie";
    }
} else if (a==b || b==c || a==c) { //wymagane inaczej nie wypisze nic gdy sa 2 takie same boki, "||" = OR
    cout<<"da sie zbudowac trojkat";
}

}